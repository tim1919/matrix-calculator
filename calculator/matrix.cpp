 #include <matrix.h>


mat& mat::init(const int& row, const int& col, QString name)
{
    if (0 != this->arr)
    {
        for (int i = 0; i < this->row; ++i)
        {
            delete[] this->arr[i];
        }
        delete[] this->arr;
    }

    arr = new float*[row];
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new float[col];
        for (int j = 0; j < col; ++j)
        {
            arr[i][j] = 0;
        }
    }
    this->row = row;
    this->col = col;

    this->name = name;

    return (*this);
}

float*& mat::operator[](const int& n)
{
    return arr[n];
}


bool mat::LUP(mat& L, mat& U, int*& P)
{
    int n = std::min(this->row, this->col);
    P = new int[n];
    for (int i = 0; i < n; ++i)
    {
        P[i] = i;//即π[i]数组，初始时P矩阵为单位阵
    }

    mat A;
    A = (*this);

    for (int k = 0; k < n; ++k)
    {
        float tmp = 0;
        int __k = k;
        for (int i = k; i < n; ++i)//先选出这一列中的最大值，防止丢失精度
        {
            if (fabs(A[i][k]) > tmp)
            {
                tmp = fabs(A[i][k]);
                __k = i;
            }
        }

        if (0 == tmp)
        {
            std::cerr << "error! singular matrix!" << std::endl;//非满秩，无法LUP分解
            return 0;
        }

        int t = P[k];
        P[k] = P[__k];
        P[__k] = t;//修改P矩阵的值（行变换）

        float* p = A[k];
        A[k] = A[__k];
        A[__k] = p;//调换k行和__k行的值

        for (int i = k + 1; i < n; ++i)
        {
            A[i][k] /= A[k][k];
            for (int j = k + 1; j < n; ++j)
            {
                A[i][j] -= A[i][k] * A[k][j];
            }
        }

        L.init(n, n);
        U.init(n, n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i > j)
                {
                    L[i][j] = A[i][j];
                }
                else if (i == j)
                {
                    L[i][j] = 1;
                    U[i][j] = A[i][j];
                }
                else
                {
                    U[i][j] = A[i][j];
                }
            }
        }
    }

    return 1;
}


mat mat::LUP_SOLVE(mat& b)
{
    int n = std::min(this->row, this->col);
    mat B, X, Y;
    B.init(n, b.col);
    X.init(n, b.col);
    Y.init(n, b.col);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < b.col; ++j)
        {
            if (i < b.row)
            {
                B[i][j] = b[i][j];
            }
        }
    }

    mat L, U;
    int* P;
    if (!LUP(L, U, P))
    {
        std::cerr << "error! (from matrix/mat mat::LUP_SOLVE(mat& b))" << std::endl;
        return X;
    }

    for (int k = 0; k < b.col; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            Y[i][k] = B[P[i]][k];
            for (int j = 0; j < i; ++j)
            {
                Y[i][k] -= L[i][j] * Y[j][k];
            }
        }

        for (int i = n - 1; i >= 0; --i)
        {
            X[i][k] = Y[i][k];
            for (int j = n - 1; j > i; --j)
            {
                X[i][k] -= U[i][j] * X[j][k];
            }
            X[i][k] /= U[i][i];
        }
    }

    return X;
}


float mat::get_determinant_val(void)//求行列式
{
    int n = std::min(this->row, this->col);
    float result = 0;
    mat L, U;
    int* P;

    if (LUP(L, U, P))
    {
        print_on_terminal();
        result = 1;
        for (int i = 0; i < n; ++i)
        {
            result *= U[i][i];
        }

        if (1 == HeapSort(P, n, [](int a, int b)->bool{return a > b;}))//通过排序次数来确定逆序数的正负性
        {
            result = -result;
        }
    }

    return result;
}

mat& mat::operator=(mat B)
{
    if (0 != this->arr)
    {
        for (int i = 0; i < this->row; ++i)
        {
            delete[] this->arr[i];
        }
        delete[] this->arr;
    }

    this->arr = new float*[B.row];
    for (int i = 0; i < B.row; ++i)
    {
        this->arr[i] = new float[B.col];
        for (int j = 0; j < B.col; ++j)
        {
            this->arr[i][j] = B[i][j];
        }
    }

    this->row = B.row;
    this->col = B.col;

    this->name = B.name;

    return *this;
}

mat mat::operator+(mat B)
{
    mat result;
    if (1 == this->row && 1 == this->col)
    {
        result.init(B.row, B.col);
        for (int i = 0; i < B.row; ++i)
        {
            for (int j = 0; j < B.col; ++j)
            {
                result[i][j] = B[i][j];
            }
        }
        int n = std::min(B.row, B.col);
        for (int i = 0; i < n; ++i)
        {
            result[i][i] += this->arr[0][0];
        }
    }
    else if (1 == B.row && 1 == B.col)
    {
        result.init(this->row, this->col);
        for (int i = 0; i < this->row; ++i)
        {
            for (int j = 0; j < this->col; ++j)
            {
                result[i][j] = this->arr[i][j];
            }
        }
        int n = std::min(this->row, this->col);
        for (int i = 0; i < n; ++i)
        {
            result[i][i] += B[0][0];
        }
    }
    else
    {
        int row = std::max(this->row, B.row);
        int col = std::max(this->col, B.col);

        result.init(row, col);
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (i < this->row && j < this->col)
                {
                    result[i][j] += this->arr[i][j];
                }

                if (i < B.row && j < B.col)
                {
                    result[i][j] += B[i][j];
                }
            }
        }
    }

    return result;
}

mat mat::operator-(mat B)
{
    mat result;
    if (1 == this->row && 1 == this->col)
    {
        result.init(B.row, B.col);
        for (int i = 0; i < B.row; ++i)
        {
            for (int j = 0; j < B.col; ++j)
            {
                result[i][j] = -B[i][j];
            }
        }
        int n = std::min(B.row, B.col);
        for (int i = 0; i < n; ++i)
        {
            result[i][i] += this->arr[0][0];
        }
    }
    else if (1 == B.row && 1 == B.col)
    {
        result.init(this->row, this->col);
        for (int i = 0; i < this->row; ++i)
        {
            for (int j = 0; j < this->col; ++j)
            {
                result[i][j] = this->arr[i][j];
            }
        }
        int n = std::min(this->row, this->col);
        for (int i = 0; i < n; ++i)
        {
            result[i][i] -= B[0][0];
        }
    }
    else
    {
        int row = std::max(this->row, B.row);
        int col = std::max(this->col, B.col);

        result.init(row, col);
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (i < this->row && j < this->col)
                {
                    result[i][j] += this->arr[i][j];
                }

                if (i < B.row && j < B.col)
                {
                    result[i][j] -= B[i][j];
                }
            }
        }
    }

    return result;
}
mat mat::operator*(mat B)
{
    mat result;
    if (1 == this->row && 1 == this->col)//考虑数字乘矩阵或者矩阵乘数字的情况
    {
        result = B;
        for (int i = 0; i < B.row; ++i)
        {
            for (int j = 0; j < B.col; ++j)
            {
                result[i][j] *= this->arr[0][0];
            }
        }
    }
    else if (1 == B.row && 1 == B.col)
    {
        result = *this;
        for (int i = 0; i < this->row; ++i)
        {
            for (int j = 0; j < this->col; ++j)
            {
                result[i][j] *= B[0][0];
            }
        }
    }
    else
    {
        int col = std::min(this->col, B.row);
        result.init(this->row, B.col);
        for (int i = 0; i < result.row; ++i)
        {
            for (int j = 0; j < result.col; ++j)
            {
                for (int k = 0; k < col; ++k)
                {
                    result[i][j] += this->arr[i][k] * B[k][j];
                }
            }
        }
    }

    return result;
}

mat mat::operator/(mat B)
{
    mat result;
    if (1 == B.row && 1 == B.col)
    {
        result = *this;
        for (int i = 0; i < this->row; ++i)
        {
            for (int j = 0; j < this->col; ++j)
            {
                result[i][j] /= B[0][0];
            }
        }
    }
    else
    {
        int n = std::min(B.row, B.col);

        mat E;
        E.init(n, n);
        for (int i = 0; i < n; ++i)
        {
            E[i][i] = 1;
        }

        result = B.LUP_SOLVE(E);//求出B的逆并存入result中
    std::cout << "mat 407, operator/: " << std::endl;
    result.print_on_terminal();
        result = (*this) * result;
    }

    return result;
}

mat mat::transpose(void)
{
    mat T;
    T.init(this->col, this->row);

    for (int i = 0; i < T.row; ++i)
    {
        for (int j = 0; j < T.col; ++j)
        {
            T[i][j] = this->arr[j][i];
        }
    }

    return T;
}

bool mat::print_on_terminal(void)
{
    std::cout << "row = " << row << "col = " << col << std::endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    return 1;
}

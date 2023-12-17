#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <QString>
#include <cmath>
#include <sort.h>

class mat
{
public:
    float** arr = 0;//矩阵的存储
    QString name;//矩阵名
    int row = 0, col = 0;//行列值

    mat& init(const int& row, const int& col, QString name = "");

    float*& operator[](const int& n);
    bool LUP(mat& L, mat& U, int*& P);//LUP分解算法
    mat LUP_SOLVE(mat& b);//解形如Ax = b的线性方程组
    float get_determinant_val(void);//求行列式的值

    mat& operator=(mat B);
    mat operator+(mat B);
    mat operator-(mat B);
    mat operator*(mat B);
    mat operator/(mat B);//求逆
    mat transpose(void);//求转置

    bool print_on_terminal(void);
};


#endif // MATRIX_H

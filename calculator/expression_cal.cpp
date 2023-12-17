#include <expression_cal.h>

bool isOperator(QChar ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '(' || ch == ')';
}

bool isDigitorLetter(QChar ch)
{
    return ch.isDigit() || ch.isLetter();
}

bool isMinus(QChar ch)
{
    return ch == '-';
}

void format(QString& inOrder)
{
    for (int i = 0; i < inOrder.length(); ++i)
    {
        if (isMinus(inOrder[i]) && (0 == inOrder[i] || isOperator(inOrder[i - 1])))
        {
            inOrder.insert(i, '0');
            ++i;
        }
    }
}

Queue<QString> inOrder2postOrder(QString inOrder)
{
    Stack<QString> s;
    Queue<QString> q;
    for (int i = 0; i < inOrder.length(); ++i)
    {
        QString str;
        while (i < inOrder.length() && isDigitorLetter(inOrder[i]))
        {
            str += inOrder[i];
            ++i;
        }
        if (!str.isEmpty())
        {
            q.enQueue(str);
        }

        if (i >= inOrder.length())
        {
            break;
        }

        if ('(' == inOrder[i])
        {
            s.push(QString(inOrder[i]));
        }

        if (')' == inOrder[i])
        {
            while ('(' != s.getTop())
            {
                q.enQueue(s.pop());
            }
            s.pop();
        }

        if ('+' == inOrder[i] || '-' == inOrder[i])
        {
            while (!s.isEmpty() && '(' != s.getTop())
            {
                q.enQueue(s.pop());
            }
            s.push(QString(inOrder[i]));
        }

        if ('*' == inOrder[i] || '/' == inOrder[i])
        {
            while (!s.isEmpty() && '(' != s.getTop() && '+' != s.getTop() && '-' != s.getTop())
            {
                q.enQueue(s.pop());
            }
            s.push(QString(inOrder[i]));
        }

        if ('^' == inOrder[i])
        {
            while (!s.isEmpty() && '(' != s.getTop() && '+' != s.getTop() && '-' != s.getTop() && '*' != s.getTop() && '/' != s.getTop())
            {
                q.enQueue(s.pop());
            }
            s.push(QString(inOrder[i]));
        }
    }

    while (!s.isEmpty())
    {
        if ('(' != s.getTop())
        {
            q.enQueue(s.getTop());
        }
        s.pop();
    }

    return q;
}


mat postOrder_cal(Hashtable& h, Queue<QString>& q)
{
    Stack<mat> s;
    while (!q.isEmpty())
    {
        QString str = q.deQueue();
        if (!isOperator(str[0]))//若是矩阵
        {
            bool isNum;
            str.toDouble(&isNum);
            if (isNum)//若是数字
            {
                double val = str.toDouble();
                mat m;
                m.init(1, 1);
                m[0][0] = val;
                s.push(m);
            }
            else if ('T' == str)//若是转置
            {
                mat* mptr = h["T"];
                if (0 == mptr)
                {
                    mat m;
                    m.name = "__T";
                    s.push(m);
//                    std::cout << s.getTop().name.toStdString() << std::endl;;
                }
                else
                {
                    s.push(*mptr);
                }
            }
            else//若是字母
            {
                mat* pm = h[str];
                if (0 == pm)
                {
                    std::cerr << "error! no such mat in hashtable! (from expression_cal.cpp/mat postOrder_cal(Hashtable& h, Queue<QString>& q))" << std::endl;
                    mat err;
                    err.init(0, 0, "__err");
                    return err;
                }
                s.push(*(h[str]));
            }
        }
        else//若是操作符
        {
            if ('+' == str)
            {
                mat b;
                b = s.pop();
                b = (s.pop() + b);
                s.push(b);
            }
            else if ('-' == str)
            {
                mat b;
                b = s.pop();
                b = (s.pop() - b);
                s.push(b);
            }
            else if ('*' == str)
            {
                mat b;
                b = s.pop();
                b = (s.pop() * b);
                s.push(b);
            }
            else if ('/' == str)
            {
                mat b;
                b = s.pop();
                b = (s.pop() / b);
                s.push(b);
            }
            else if ('^' == str)
            {
//                mat b = s.pop();
                if ("__T" == s.getTop().name)
                {
                    s.pop();
                    s.push(s.pop().transpose());
                }
                else
                {
                    mat b = s.pop();
                    mat a = s.pop();
                    if (0 == b[0][0])//若为0次方
                    {
                        int n = std::min(a.row, a.col);
                        a.init(n, n);
                        for (int i = 0; i < n; ++i)
                        {
                            a[i][i] = 1;
                        }
                    }
                    else
                    {
                        mat tmp;
                        tmp = a;
//                        std::cout << "b[0][0] = " << b[0][0] << std::endl;
                        for (int i = 1; i < b[0][0]; ++i)
                        {
                            a = (a * tmp);
//                            a.print_on_terminal();
//                            std::cout << "tmp:" << std::endl;
//                            tmp.print_on_terminal();
                        }
                    }
                    s.push(a);
                }
            }
        }

    }

    return s.pop();
}

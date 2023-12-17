#ifndef EXPRESSION_CAL_H
#define EXPRESSION_CAL_H

#include <QString>
#include <QChar>
#include <stack.h>
#include <queue.h>
#include <matrix.h>
#include <hashtable.h>


bool isOperator(char ch);
bool isMinus(char ch);
void format(QString& inOrder);
Queue<QString> inOrder2postOrder(QString inOrder);
mat postOrder_cal(Hashtable& h, Queue<QString>& q);

#endif // EXPRESSION_CAL_H

#ifndef STACK_H
#define STACK_H

#include <iostream>

template <typename T>
class Stack
{
private:
    struct Node
    {
        T data;
        Node* next;
    } *top;

public:
    Stack(void);
    ~Stack(void);
    bool isEmpty(void);
    T getTop(void);
    bool push(T elem);
    T pop(void);
};

#include <stack.cpp>

#endif

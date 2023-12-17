#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue
{
public:
    Queue(void);
    ~Queue(void);

    bool isEmpty(void) const;
    bool enQueue(const T& elem);
    T deQueue(void);

private:
    struct Node
    {
        T data;
        Node* next;
    };
    Node* front = 0;
    Node* rear = 0;
};

#include <queue.cpp>

#endif // QUEUE_H

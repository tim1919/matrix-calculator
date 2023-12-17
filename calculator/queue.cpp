
template <typename T>
Queue<T>::Queue(void)
{
    front = new Node[1];// 头结点
    rear = front;
    front->next = 0;
}

template <typename T>
Queue<T>::~Queue(void)
{
    while (1)
    {
        if (front == rear)
            break;

        deQueue();
    }
    delete[] front;
}


template <typename T>
bool Queue<T>::isEmpty(void) const
{
    return front == rear;
}

template <typename T>
bool Queue<T>::enQueue(const T& elem)
{
    if (0 == front)
    {
        std::cout << "Queue hasn't been initialized!" << std::endl;
        return 0;
    }

    Node* tmp = new Node[1];
    rear->next = tmp;
    rear = tmp;
    rear->data = elem;
    rear->next = 0;

    return 1;
}

template <typename T>
T Queue<T>::deQueue(void)
{
    T tmp;
    if (0 == front)
    {
        std::cout << "Queue hasn't been initialized!" << std::endl;
        return tmp;
    }
    else if (front == rear)
    {
        std::cout << "Queue is empty!" << std::endl;
        return tmp;
    }


    Node* ptr = front->next;
    tmp = ptr->data;
    if (ptr != rear)
    {
        front->next = ptr->next;
    }
    else
    {
        front->next = 0;
        rear = front;
    }

    delete[] ptr;
    return tmp;
}

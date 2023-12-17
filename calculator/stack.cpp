

template <typename T>
Stack<T>::Stack(void)
{
    top = new Node[1];
    top->next = 0;
}

template <typename T>
Stack<T>::~Stack(void)
{
    while (!isEmpty())
    {
        pop();
    }
    delete[] top;
}

template <typename T>
bool Stack<T>::isEmpty(void)
{
    return top->next == 0;
}

template <typename T>
T Stack<T>::getTop(void)
{
    if (0 == top->next)
    {
        T tmp;
        std::cerr << "stack is empty! (from stack.cpp/T Stack<T>::getTop(void))" << std::endl;
        return tmp;
    }
    else
    {
        return top->next->data;
    }
}

template <typename T>
bool Stack<T>::push(T elem)
{
    Node* tmp = new Node[1];
    tmp->data = elem;
    tmp->next = top->next;
    top->next = tmp;

    return 1;
}

template <typename T>
T Stack<T>::pop(void)
{
    if (0 == top->next)
    {
        T tmp;
        std::cerr << "stack is empty! (from stack.cpp/T Stack<T>::pop(void))" << std::endl;
        return tmp;
    }
    else
    {
        Node* tmp = top->next;
        T val = tmp->data;
        top->next = top->next->next;
        delete[] tmp;
        return val;
    }
}

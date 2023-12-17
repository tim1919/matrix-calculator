//#pragma once
#include <hashtable.h>

Hashtable::Hashtable(void)
{
    table = new HashNode*[HASHTABLE_LENGTH];
    for (int i = 0; i < HASHTABLE_LENGTH; ++i)
    {
        table[i] = 0;
    }
}

Hashtable::~Hashtable(void)
{
    delete[] table;
}

int Hashtable::Hash(const QString& str)
{
    int hash_val = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        hash_val = (hash_val * BASE + (int)(str[i].toLatin1())) % M;
    }
    return hash_val;
}

mat* Hashtable::operator[](const QString& str)
{
    if (0 == str.length())
    {
        return 0;
    }
    int n = Hash(str);
//    std::cout << "[]::" << n << std::endl;
    HashNode* ptr = table[n];

    while (0 != ptr)
    {
        if (str == ptr->data.name)
        {
            return &(ptr->data);
        }
        ptr = ptr->next;
    }
    std::cerr << "error! no such elem! (from hashtable.cpp/mat& Hashtable::operator[](const QString& str))" << std::endl;
    return 0;
}

mat* Hashtable::insert(mat m)
{
    int n = Hash(m.name);
    HashNode* tmp = new HashNode[1];
    tmp->data = m;
    tmp->data.name = m.name;
    tmp->next = table[n];
    table[n] = tmp;
    return &(table[n]->data);

}

bool Hashtable::remove(const QString& str)
{
    if (0 == str.length())
    {
        return 0;
    }
    int n = Hash(str);
    HashNode* ptr = table[n];
    if (0 == ptr)
    {
        std::cerr << "error! no such elem! (from hashtable.cpp/bool Hashtable::delete(const QString& str))" << std::endl;
        return 0;
    }
    if (str == ptr->data.name)
    {
        table[n] = ptr->next;
        delete[] ptr;
        return 1;
    }
    else
    {
        HashNode* pre = ptr;
        ptr = ptr->next;
        while (0 != ptr)
        {
            if (str == ptr->data.name)
            {
                pre->next = ptr->next;
                delete[] ptr;
                return 1;
            }
        }
        std::cerr << "error! no such elem! _2 (from hashtable.cpp/bool Hashtable::delete(const QString& str))" << std::endl;
        return 0;
    }
}

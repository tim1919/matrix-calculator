#ifndef HASHTABLE_H
#define HASHTABLE_H


#include <QString>
#include <matrix.h>
#include <iostream>

#define HASHTABLE_LENGTH 1000
#define BASE 10
#define M 997

class Hashtable
{
private:
    struct HashNode
    {
        mat data;
        HashNode* next;
    } **table;

    int Hash(const QString& str);
public:
    Hashtable(void);
    ~Hashtable(void);
    mat* operator[](const QString& str);
    mat* insert(mat m);
    bool remove(const QString& str);
};

//#include <hashtable.cpp>
#endif // HASHTABLE_H

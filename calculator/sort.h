#ifndef SORT_H
#define SORT_H

int Heap_Adjust(int* const& arr, int top, const int& elem_size, bool (* compare)(int a, int b));
int HeapSort(int* const& arr, const int& elem_size, bool (* compare)(int a, int b));


#endif // SORT_H

#include <sort.h>

int Heap_Adjust(int* const& arr, int top, const int& elem_size, bool (* compare)(int a, int b))
{
    int time_of_swap = 0;
    int tmp;
    for (int child = 2 * top + 1; child < elem_size; child = child * 2 + 1)
    {
        if (child < elem_size - 1 && compare(arr[child + 1], arr[child]))//先选出两个孩子里最大（小）的
        {
            ++child;
        }
        if (!compare(arr[child], arr[top]))//如果孩子比父结点小（大），说明无须调整（注意，这里只能说明这三个结点无须调整！！！）
        {
            break;
        }

        //如果没有 break ，说明某个孩子结点需要调整，那就得一直沿着这个孩子结点往下调整直到无须调整
        tmp = arr[top];
        arr[top] = arr[child];
        arr[child] = tmp;
        top = child;

        ++time_of_swap;
    }

    return time_of_swap;
}

int HeapSort(int* const& arr, const int& elem_size, bool (* compare)(int a, int b))
{
    int time_of_swap = 0;
    int tmp;
    for (int i = elem_size / 2 - 1; i >= 0; --i)//注意：这里从第一个有孩子的结点开始，一个一个往前调用 Heap_Adjust 函数是因为：Heap_Adjust 函数只能调整只有堆顶有问题的大（小）顶堆，故在生成大（小）顶堆时只能从最下面一点一点往上生成
    {
        time_of_swap += Heap_Adjust(arr, i, elem_size, compare);
    }//第一步：生成大（小）顶堆

    for (int i = elem_size - 1; i > 0; --i)
    {
        tmp = arr[0];
        arr[0] = arr[i];
        arr[i] = tmp;

        ++time_of_swap;
        // std::cout << arr[0].name << ' ' << arr[1].name << arr[2].name << arr[3].name << "     ";

        time_of_swap += Heap_Adjust(arr, 0, i, compare);
        // std::cout << arr[0].name << ' ' << arr[1].name << arr[2].name << arr[3].name << std::endl;

    }//第二步：循环将堆顶元素塞到堆后面（即有序区），此时原大（小）顶堆只有对顶有问题，然后再次调整

    return time_of_swap;
}

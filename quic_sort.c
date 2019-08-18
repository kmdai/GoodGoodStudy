/**
 * 快速排序
 * nlog2n
 * 
 * */
#include <stdio.h>
#define arraySizeInt(a) (sizeof(a) / sizeof(int))
void quic_sort(int *, int, int);
int main()
{
    int array[] = {34, 12, 6, 47, 4, 36, 86, 12, 43, 24, 12, 3};
    int size = arraySizeInt(array);
    quic_sort(array, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d,", array[i]);
    }
    return 1;
}

void quic_sort(int *array, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int l = start;
    int r = end;
    int temp = array[start];
    while (l < r)
    {
        while (l < r && array[r] >= temp)
        {
            r--;
        }
        array[l] = array[r];
        while (l < r && array[l] < temp)
        {
            l++;
        }
        array[r] = array[l];
    }
    array[r] = temp;
    quic_sort(array, 0, l);
    quic_sort(array, r + 1, end);
}
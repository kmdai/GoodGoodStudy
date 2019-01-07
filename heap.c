#include <stdio.h>

/**
 * n :start
 * m :size
 * 
 * */
void heapAdjust(int *data, int n, int m)
{
    int i, j;
    int rc;
    rc = data[n], i = n;
    for (j = i * 2; j <= m; j = j * 2)
    {
        if (j < m && data[j] < data[j + 1])
        {
            j++;
        }
        if (rc > data[j])
        {
            break;
        }
        data[i] = data[j];
        i = j;
    }
    data[i] = rc;
}
void heapSort(int *data, int size)
{
    int i;
    for (i = size / 2; i > 0; i--)
    {
        heapAdjust(data, i, size - 1);
    }
    for (i = size - 1; i > 1; i--)
    {
        int a = data[i];
        data[i] = data[1];
        data[1] = a;
        heapAdjust(data, 1, i - 1);
    }
}
int main()
{
    int a[] = {34, 5, 2, 6, 7, 45, 32, 1, 3, 56, 78, 65, 64, 32};
    int size = sizeof(a) / sizeof(int);
    heapSort(a, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d-", a[i]);
    }
    printf("\n");
    return 1;
}
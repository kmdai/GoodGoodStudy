/**
 * 
 * 
 * 求一个数组任意的连续子数组的最大和
 * 
 * */
#include <stdio.h>
int max(int, int);
int calMaxSumOfArray(int[], int);
int main()
{
    int a[] = {-1, 3, 5, -2, 9,-4,-6};
    printf("%d\n", calMaxSumOfArray(a, sizeof(a) / sizeof(int)));
}
int calMaxSumOfArray(int a[], int size)
{
    int sum = a[0];
    int temp = a[0];
    for (int i = 1; i < size; i++)
    {
        temp = max(temp + a[i], a[i]);
        if (sum < temp)
        {
            sum = temp;
        }
    }
    return sum;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

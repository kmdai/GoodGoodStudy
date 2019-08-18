/**
 * 给你一个有序整数数组，数组中的数可以是正数、负数、零，请实现一个函数，
 * 这个函数返回一个整数：返回这个数组所有数的平方值中有多少种不同的取值
 * 1.nums = {-1,1,1,1},
 *   那么你应该返回的是：1。因为这个数组所有数的平方取值都是1，只有一种取值
 * 2.nums = {-1,0,1,2,3}
 *   你应该返回4，因为nums数组所有元素的平方值一共4种取值：1,0,4,9
 * */
#include <stdio.h>
#include <stdlib.h>
#define arraySizeInt(a) (sizeof(a) / sizeof(int))
int find(int *, int size);

int main()
{
    int a[] = {-9, -6, -6, -5, -4, 1, 1, 2, 3, 4, 6, 7};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 9};
    int c[] = {-9, -8, -7, -6, -6, -5, -4, -3, -2, -1};
    printf("the sum=%d\n", find(a, arraySizeInt(a)));
    return 0;
}

int find(int *array, int size)
{
    int sum = 0;
    int start = 0;
    int end = size - 1;

    while (start < end)
    {

        while (start < end && abs(array[start]) >= abs(array[end]))
        {
            if (((start + 1 < size) && abs(array[start]) == abs(array[start + 1])) || abs(array[end]) == abs(array[start]))
            {
                sum++;
            }
            start++;
        }
        while (start < end && abs(array[end]) > abs(array[start]))
        {
            if (end - 1 >= 0 && abs(array[end]) == abs(array[end - 1]))
            {
                sum++;
            }
            end--;
        }
    }
    return size - sum;
}
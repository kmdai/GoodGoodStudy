#include <stdio.h>

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void paritition(int *arr, int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        while (left < right && arr[left] < 0)
        {
            left++;
        }
        while (left < right && arr[right] > 0)
        {
            right--;
        }
        if (left < right)
        {
            swap(arr, left, right);
        }
    }
}

int main()
{
    int arr[9] = {-5, 3, 2, -1, 4, -3, -4, 5, 9};
    int size = sizeof(arr) / sizeof(int);
    paritition(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d=:%d\n", i, arr[i]);
    }
}

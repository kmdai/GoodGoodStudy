//
//
//希尔排序
//
//

#include <stdio.h>
#include <math.h>

#define arraySize(a) (sizeof(a) / sizeof(int))

int main()
{
    void shellSort(int array[], int n, int t); //t为排序趟数
    int array[] = {58, 54, 74, 87, 51, 12, 47, 54, 14, 74, 32, 15, 21, 41};
    int size = arraySize(array);
    shellSort(array, size, (int)(log(size + 1) / log(2))); //排序趟数应为log2(n+1)的整数部分
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 1;
}

//根据当前增量进行插入排序
void shellInsert(int array[], int n, int dk)
{
    int i, j, temp;
    for (i = dk; i < n; i++) //分别向每组的有序区域插入
    {
        temp = array[i];
        for (j = i - dk; (j >= i % dk) && array[j] > temp; j -= dk) //比较与记录后移同时进行
            array[j + dk] = array[j];
        if (j != i - dk)
            array[j + dk] = temp; //插入
    }
}

//计算Hibbard增量
int dkHibbard(int t, int k)
{
    return (int)(pow(2, t - k + 1) - 1);
}

//希尔排序
void shellSort(int array[], int n, int t)
{
    void shellInsert(int array[], int n, int dk);
    int i;
    for (i = 1; i <= t; i++)
        shellInsert(array, n, dkHibbard(t, i));
}

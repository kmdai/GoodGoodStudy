#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int find(int *, int, int);
int main()
{
    int list[] = {2, 5, 34, 54, 45, 54, 34, 5, 42, 76, 41, 98, 65, 34, 55, 22, 33, 12, 17, 4};

    int a = find(list, sizeof(list) / sizeof(int), 54);
    printf("the first point is %d\n", a);
    return 0;
}

int find(int *list, int size, int sum)
{
    int i = 0;
    int j = i + 1;
    int s = list[i];
    while (j < size)
    {
        if (list[j++] <= sum)
        {
            while (s > sum)
            {
                s -= list[i++];
            }
            if (s == sum)
            {
                return i;
            }
            s += list[j];
        }
        else
        {
            i = j;
            s = list[i];
        }
    }
    return -1;
}
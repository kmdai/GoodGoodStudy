#include <stdio.h>

int find(int *, int size);
int main()
{
    int a[] = {-4,-2,-1, 0, 1, 2, 3, 7};
    int sum = find(a, sizeof(a) / sizeof(int));
    printf("the sum=%d\n", sum);
    return 0;
}
int find(int *data, int size)
{
    int sum = 0;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (data[i] <= 0)
        {
            if (data[i] == 0)
            {
                index = i;
            }
            sum++;
        }
        else if (data[i] > 0)
        {
            int j = index - (i - index);
            if (j >= 0 && data[j] != data[i] * data[i])
            {
                sum++;
            }
            else if (j < 0)
            {
                sum++;
            }
        }
        data[i] = data[i] * data[i];
    }
    return sum;
}
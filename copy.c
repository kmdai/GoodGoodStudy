#include <stdio.h>

char *get_no_s(char *, int);
int main()
{
    char str[] = "There is no better time to talk about Android dessert releases than the";
    char *c = get_no_s(str, sizeof(str) / sizeof(char));
    printf("%s--end\n", c);
    return 0;
}

char *get_no_s(char *data, int size)
{
    int i, j;
    i = 0;
    j = 0;
    while (j < size)
    {
        if (data[j] == ' ')
        {
            j++;
            continue;
        }
        data[i++] = data[j++];
    }
    return data;
}
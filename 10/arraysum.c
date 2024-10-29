#include <stdio.h>

int arraySum(int *ptr)
{
    int sum = 0;

    while (*ptr != -1)
    {
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1};
    int sum;

    sum = arraySum(a);

    printf("合計 = %d\n", sum);

    return 0;
}

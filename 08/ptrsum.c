#include <stdio.h>
int arraySum(int *ptr)
{
    int sum = 0;
    for (; *ptr != -1; ptr++)
    {
        sum += *ptr; //加算
    }
    return (sum); //返す
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, -1};
    int sum;
    sum = arraySum(a);
    printf("合計: %d\n"), sum;
    return 0;
}

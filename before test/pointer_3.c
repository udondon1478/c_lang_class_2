#include <stdio.h>
int main(int argc, char const *argv[])
{
    int values[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", values + i);
    }

    for (i = 9; i >= 0; i--)
    {
        printf("\n%d", *(values + i));
    }
    return 0;
}

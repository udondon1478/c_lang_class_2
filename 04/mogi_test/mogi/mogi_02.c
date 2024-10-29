#include <stdio.h>
#define MAX (6)

int main(int argc, char const *argv[])
{
    int x[MAX+1];

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("偶数:");
    for (int i = 0; i < MAX; i++)
    {
        if (x[i] % 2 == 0)
        {
            printf("%d ", x[i]);
        }
    }

    printf("\n");

    printf("奇数:");
    for (int i = 0; i < MAX; i++)
    {
        if (x[i] % 2 != 0)
        {
            printf("%d ", x[i]);
        }
    }

    printf("\n");
    return 0;
}
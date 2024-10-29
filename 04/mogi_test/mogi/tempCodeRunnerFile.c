#include <stdio.h>
#define MAX (10)

int main(int argc, char const *argv[])
{
    int x[MAX+1];

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = MAX; x[i] != '\0'; i--)
    {
        if ((x[i] % 2 != 0) && (i == 0))
        {
            printf("%d", x[i]);
        }else if (x[i] % 2 != 0)
        {
            printf("%d ", x[i]);
        }
    }

    printf("\n");

    for (int i = MAX; x[i] != '\0'; i--)
    {
        if ((x[i] % 2 == 0) && (i == 0))
        {
            printf("%d", x[i]);
        }else if (x[i] % 2 == 0)
        {
            printf("%d ", x[i]);
        }
    }

    printf("\n");
    return 0;
}
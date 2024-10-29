#include <stdio.h>
#define MAX (26)
int main(int argc, char const *argv[])
{
    int x, n = 0;
    scanf("%d", &x);

    /*for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%c", n+65);
            n++;
        }
        printf("\n");
    }*/

    for (int i = 0; i < MAX; i++)
    {
        printf("%c", n + 65);
        if (i % x == 0 && i != 0 && i == 6)
        {
            printf("\n");
        }
        n++;
    }

    return 0;
}

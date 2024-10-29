#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, x, m = 0, num = 0;

    scanf("%d %d", &n, &x);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            num = i + j;

            if (num == x)
            {
                m++;
            }
        }
    }
    printf("%d\n", m);

    return 0;
}
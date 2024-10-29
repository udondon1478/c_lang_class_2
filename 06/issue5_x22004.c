#define M_MAX (100)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n, i, j;
    int c[M_MAX];
    int sum, a;

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &c[i]);
    }

    for (i = 0; i < n; i++) //人のループ
    {
        sum = 0;
        for (j = 0; j < m; j++) //お肉のループ
        {
            scanf("%d", &a);
            sum += a * c[j] / 100;
        }
        printf("%d\n", sum);
    }

    return 0;
}
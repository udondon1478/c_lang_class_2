#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i;
    int sign = 1; //符号
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        // i = 0 (1回微分) -> +のまま (sin -> cos)
        // i = 1 (2回微分) -> -1倍 (cos -> sin)
        // i = 2 (3回微分) -> +のまま(sin -> cos)
        // i = 3 (4回微分) -> -1倍(cos -> sin)
        if (i % 2 == 1)
        {
            sign *= -1;
        }
    }

    if (sign == 1)
    {
        putchar('+');
    }
    else
    {
        putchar('-');
    }

    // sinを奇数回微分するとcos
    // sinを偶数回微分するとsin
    if (n % 2 == 0)
    {
        printf("sinx\n");
    }
    else
    {
        printf("cosx\n");
    }

    return 0;
}

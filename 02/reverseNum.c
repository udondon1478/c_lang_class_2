#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n=5, Num[n];
    printf("%d個の数字を印字せよ\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d番目の数: ", i);
        scanf("%d", &Num[i]);
    }

    printf("逆順で印字します\n");
    for (i = n - 1; 0 <= i; i--)
    {
        printf("%d番目の数: %d\n", i, Num[i]);
    }

    return 0;
}

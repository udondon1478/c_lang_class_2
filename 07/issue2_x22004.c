#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, fx = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (fx == 3)
        {
            fx = 0;
            continue;
        }
        fx++;
    }

    if (fx == 0)
    {
        printf("+sinx");
    }
    else if (fx == 1)
    {
        printf("+cosx");
    }
    else if (fx == 2)
    {
        printf("-sinx");
    }else{
        printf("-cosx");
    }
    printf("\n");
    return 0;
}

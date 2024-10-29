#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n, i, sum=1;

    printf("n=");
    scanf("%d", &n);

    printf("%d!=", n);
    for (i = 1; i <= n; n--)
    {
        sum *= n;
    }
    
    printf("%d\n", sum);
    return 0;
}

#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n, sum=0;

    printf("n=");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    
    printf("sum = %d\n", sum);
    return 0;
}

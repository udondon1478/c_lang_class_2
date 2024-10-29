#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, x, m = 0, num = 0;

    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            for (int k = j+1; k <= n; k++)
            {
                num = i + j + k;
                if (num == x)
                {
                    m++;
                }
            }
        }
    }
    
    printf("%d\n", m);
    return 0;
}
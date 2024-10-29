#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, n, m = 0, num;

    scanf("%d %d", n, x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num = i + j;
            if (num == x)
            {
                m++;
            }
        }
    }
    printf("%d", m);

    return 0;
}

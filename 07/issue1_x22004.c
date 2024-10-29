#include <stdio.h>
#define TMAX (1000)
#define KMAX (100)

int main(int argc, char const *argv[])
{
    int n = 0, k = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 5)
        {
            k += a[i] - 5;
        }
    }

    printf("%d\n", k);
    return 0;
}

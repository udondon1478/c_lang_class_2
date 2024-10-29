#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, h;
    scanf("%d %d", &n, &h);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        int left = (i - h + n) % n;
        int right = (i + h) % n;
        int max = -1;
        if (a[left] > a[i])
            max = a[left];
        if (a[right] > a[i])
            max = (max > a[right]) ? max : a[right];

        if (max != -1)
            printf("%d ", max);
        else
            printf("none ");
    }
    printf("\n");

    return 0;
}

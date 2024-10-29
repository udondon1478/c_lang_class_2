#include <stdio.h>

void wasa(int a, int b, int *wa, int *sa)
{
    *wa = a + b;
    *sa = a - b;
}
int main(int argc, char const *argv[])
{
    int a, b;
    int *wa = &a, *sa = &b;

    while (1)
    {
        scanf("%d %d", &a, &b);

            if (a == 0 && b == 0)
        {
            break;
        }
        wasa(a, b, wa, sa);
        printf("%d %d", a, b);
    }

    return 0;
}

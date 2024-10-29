#include <stdio.h>
int sub(int a, int b)
{
    int x = 0;
    x = a - b;
    printf("%d\n", x);
    return 0;
}

int main(int argc, char const *argv[])
{
    int a, b;

    scanf("%d %d", &a, &b);

    sub(a, b);
    return 0;
}

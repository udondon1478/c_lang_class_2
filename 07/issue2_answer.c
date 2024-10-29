#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    switch (n % 4)
    {
    case 1:
        printf("+cosx\n");
        break;
    case 2:
        printf("-sinx\n");
        break;
    case 3:
        printf("-cosx\n");
        break;
    case 4:
        printf("+sinx\n");
        break;
    }
    return 0;
}

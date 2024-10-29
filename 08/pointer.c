#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr = &a;
    printf("a=%d, *ptr=%d\n", a, *ptr);
    printf("ptr? ");    //scanf
    scanf("%d", ptr);   //&記号は不要
    printf("a=%d, *ptr=%d\n", a, *ptr);
    return 0;
}
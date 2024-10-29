#include <stdio.h>

int strlen2 (char *str) {  //ポインタの引数
    int x=0;
    while (*str != '\0')
    {
        str++;
        x++;
    }
    printf("%d\n", x);
    return 0;
}

int main(int argc, char const *argv[])
{
    char str[100];
    int *ptr = &str;
    scanf("%s", &str);
    strlen2(str);   //ポインタを渡す
    return 0;
}
#include <stdio.h>

int strlen2 (char *str) {   //ポインタの引数
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return (count); //加算結果を返す
}

int main(int argc, char const *argv[])
{
    char str[256];
    printf("input? ");
    scanf("%s", str);
    printf("count=%d\n", strlen2(str));
    return 0;
}

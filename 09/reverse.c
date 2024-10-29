#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *str = "Hello, world!\n";
    int count = 0; //文字列の長さの計測

    while (*str != '\0')
    {
        printf("%s", str); //文字列の印字
        str++;             //ポインタの移動
        count++;           //文字数の計測
    }

    str--; //'\0'文字より前に移動
    for (; count > 0; count--)
    {
        printf("%s", str); //文字列の印字
        str--;             //ポインタの移動
    }
    return 0;
}

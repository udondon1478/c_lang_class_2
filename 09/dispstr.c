#include <stdio.h>

void dispStr (char *str) {  //ポインタの引数
    while (*str != '\0')
    {
        printf("%c", *str); //*strは実体
        str++;
    }
}

int main(int argc, char const *argv[])
{
    char *str = "Hello, world\n";
    dispStr(str);   //ポインタを渡す
    return 0;
}
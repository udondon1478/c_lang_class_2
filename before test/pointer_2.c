#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[] = "hello world";

    // 'h'と'w'を大文字にする
    *str -= ('a' - 'A');
    *(str + 6) -= ('a' - 'A');

    printf("%s\n", str);
    return 0;
}
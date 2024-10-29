#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c = 'A';
    char *ptr = &c; //ポインタの変数&アドレスを代入し変数をさす

    *ptr += 3;  //3を加算

    printf("%c\n", c);
    return 0;
}
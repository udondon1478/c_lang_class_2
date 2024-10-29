#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);    //aに挿入
    printf("a=%d\n", a);    //印字
    printf("aのアドレス: %p\n", &a);    //アドレスの印字 %p:アドレスを16進数で印字
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr = &a; // aのアドレスをポインタptrに代入
                   //ポインタのアドレスを指している
    printf("a=%dm *ptr=%d\n", a, *ptr); //*ptr:実体
    printf("*ptr?");
    scanf("%d", ptr); //&記号は必要なし
                      // ptr: ポインタ=アドレス
    printf("a=%d, *ptr=%d\n", a, *ptr);
    return 0;
}

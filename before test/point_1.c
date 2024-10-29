#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int *p;

    // xの値を12にする
    p = &x; //ポインタpにxのアドレスを格納
    *p = 12;    //pのアドレスが差している先(実体)に12を代入



    printf("%d\n", x);
    return 0;
}

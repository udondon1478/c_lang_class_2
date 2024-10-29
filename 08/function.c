#include <stdio.h>
//プロトタイプ宣言
void cpyFunction1(int a, int b);
void cpyFunction2(int *a, int *b);

//値渡し
void cpyFunction1(int a, int b)
{
    a = 10;
    b = 5;
}

//ポインタ渡し
void cpyFunction2(int *a, int *b)
{
    *a = 10;
    *b = 5;
}

int main(int argc, char const *argv[])
{
    int c = 1, d = 2;
    cpyFunction1(c, d); //値渡しの関数実行
    printf("c=%d, d = %d\n", c, d);
    cpyFunction2(&c, &d); //ポインタ渡しの関数実行
    printf("c=%d, d=%d\n", c, d);
    return 0;
}
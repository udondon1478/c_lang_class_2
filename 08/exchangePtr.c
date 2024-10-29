#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 5;
    int *ptrA, *ptrB;   //ポインタ
    int tmp;    //一時的に格納する変数

    //ポインタでアドレスを指す
    ptrA = &a;
    ptrB = &b;
    printf("before:a=%d,b=%d", a, b);
    
    //値の入れ替え
    tmp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tmp;

    printf("after: a=%d, b=%d\n", a, b);
    return 0;
}

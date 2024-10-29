#include <stdio.h>

void swapFunc(int *ptrA, int *ptrB){
    int tmp;
    //値の入れ替え
    tmp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tmp;
}

int main(int argc, char const *argv[])
{
    int c = 1, d = 2;
    
    printf("c=%d,d=%d\n", c, d);
    printf("関数の実行\n");
    swapFunc(&c, &d);   //関数実行
    printf("c=%d, d=%d\n", c, d);

    return 0;
}

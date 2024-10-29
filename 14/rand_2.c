#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // srand()のために必要
int main(void){
    int i;

    srand((unsigned)time(NULL));    //乱数系列を変える「おまじない」
    
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }
    return 0;
}
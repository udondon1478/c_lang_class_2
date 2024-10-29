#include <stdio.h>
#define NMAX (5) //数字の限度

int main(int argc, const char * argv[]){
    int i, m=NMAX, n;
    int a[NMAX]; //格納する配列
    printf("%d個の数字を印字せよ\n", NMAX);

    for (i = 0; i < m; i++)
    {
        printf("%d番目の数: ", i);
        scanf("%d", &a[i]); //入力
    }
    printf("何番目を出力しますか: ");
    scanf("%d", &n);
    printf("%d番目の数: %d\n", n, a[n]);
    return 0;
}
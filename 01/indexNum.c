#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num[5], n;  //配列とn番目を宣言

    printf("5個の数字を印字せよ\n");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);   //配列に格納
    }
    
    printf("何番目を出力しますか？\n");

    scanf("%d", &n);    //n番目に代入

    printf("%d\n", num[n]);       //n番目を出力
    return 0;
}

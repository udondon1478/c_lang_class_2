#include <stdio.h>
#include <string.h>

#define MAX (20)

int main(int argc, char const *argv[])
{
    char a[MAX+1], b{MAX+1}, c[MAX*2+1]="";

    printf("文字列aを入力してください: ");
    scanf("%s", a);
    printf("文字列bを入力してください: ");
    scanf("%s", b);

    //文字列の場合
    strcat(c, a); //cの後ろにaの結合
    strcat(c, b); //cの後ろにbの結合
    printf("文字列cは%sです\n", c);
    return 0;
}

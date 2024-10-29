#include <stdio.h>
#include <string.h>

#define MAX (20)

int main(int argc, char const *argv[])
{
    char a[MAX];

    printf("文字列を入力してください: ");
    scanf("%s", a); //文字列の入力

    //キャスト(型変換しておく)
    printf("文字列aの長さは%dです\n", (int)strlen(a));
    return 0;
}
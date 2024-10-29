#include <stdio.h>
#include <string.h>

#define MAX (20)

int main(int argc, char const *argv[])
{
    int i, len;
    char a[MAX + 1];

    printf("文字列aを入力してください: ");
    scanf("%s", a);

    printf("数値列に変換します: ");
    len = strlen(a); //文字列aの長さ（実際に入力した分)
    for (i = 0; i < len; i++)
    {
        printf("%d", a[i]); //文字を数値として表示
    }
    printf("\n");
    return 0;
}

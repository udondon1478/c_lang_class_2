#include <stdio.h>
#include <string.h>

#define MAX (20)
int main(int argc, char const *argv[])
{
    char s1[MAX], s2[MAX]; //二つの入力文字列を格納

    printf("文字列s1を入力してください");
    scanf("%s", s1);

    printf("文字列s2を入力してください");
    scanf("%s", s2);

    if (strcmp(s1, s2) == 0)
    {
        printf("文字列は等しいです\n");
    }
    else
    {
        printf("文字列は等しくないです\n");
    }

    return 0;
}
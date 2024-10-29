#include <stdio.h>
#include <string.h>
#define MAX (100)

int main(int argc, char const *argv[])
{
    int i;
    int left, right;
    char ary[MAX];

    scanf("%s", ary); //計算式を読む

    for (i = 0; i < (int)strlen(ary); i++)
    {
        if (ary[i] != '1') // 1と異なる -> + or -
        {
            left = i;                         //配列の左にあるiの個数
            right = (int)strlen(ary) - 1 - i; //記号の右にある1の個数
            if (ary[i] == '-')
            {
                printf("%d\n", left - right);
            }
            else
            {
                printf("%d\n", left + right);
            }
            break; //以降は読む必要なしÏ
        }
    }

    return 0;
}

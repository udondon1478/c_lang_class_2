#include <stdio.h>
#include <string.h>

#define MAX (256)

int main(int argc, char const *argv[])
{
    int n;
    char s[MAX];

    scanf("%d", &n);
    scanf("%s", s);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0) //奇数だったら
        {
            if ('A' <= s[i] && s[i] <= 'Z') //大文字チェック
            {
                s[i] = (s[i] - 'A') + 'a';
            }
        }
        else
        {
            if ('a' <= s[i] && s[i] <= 'z') //小文字チェック
            {
                s[i] = (s[i] - 'a') + 'A';
            }
        }
        printf("%c", s[i]);
    }

    printf("\n");
    return 0;
}

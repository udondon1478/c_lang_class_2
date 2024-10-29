#include <stdio.h>
#include <string.h>

int main()
{
    int n;         // 文字列の長さ
    char S[20];    // 入力される対象文字列
    char c, R[20]; // 置換元文字、置換文字列

    scanf("%d", &n);
    scanf("%s", S);
    scanf(" %c", &c);
    scanf("%s", R);

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == c)
        {
            int j = i;
            for (int k = 0; k < strlen(R); k++, j++)
                S[j] = R[k];
        }
    }

    printf("%s\n", S);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX (50)

int main(int argc, char const *argv[])
{
    char s[MAX + 1];
    int num;
    printf("50文字以内の文字列を入力してください: ");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '@')
        {
            char temp[MAX-i];
            num = s[i + 1];
            char c[num];
            for (int j = 0; c[j] != '\0'; j++)
            {
                c[j] = s[i + 1];
            }
        strcat()
        }
    }

    return 0;
}
#include <stdio.h>
#define MAX (100)
int main(int argc, char const *argv[])
{
    char s[MAX], x = 0, moji = 0, tmp = 0;
    scanf("%s", s);

    moji = s[0];
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[0] == s[i])
        {
            x++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                tmp++;
                if (tmp == x && s[i] < moji)
                {
                    x = tmp;
                    moji = s[i];
                }
                else if (tmp > x)
                {
                    x = tmp;
                    moji = s[i];
                }
            }
        }
        tmp=0;
    }

    if ('a' <= moji && moji <= 'z')
    {
        moji -= 32;
    }

    printf("%c\n", moji);
    return 0;
}

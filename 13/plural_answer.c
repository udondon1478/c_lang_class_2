#include <stdio.h>
#define NMAX (21)
int main(int argc, char const *argv[])
{
    int i, N;
    char str[NMAX];
    int len;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", str);
        len = (int)strlen(str);

        if ((str[len - 1] == 's') ||
            ((str[len - 2] == 's') && (str[len - 1] == 'h')) ||
            ((str[len - 2] == 'c') && (str[len - 1] == 'h')) ||
            (str[len - 1] == 'o') ||
            (str[len - 1] == 'x'))
        {
            str[len] = 'e';
            str[len + 1] = 's';
            str[len + 2] = '\0';
        }
        else if (str[len - 1] == 'f')
        {
            str[len - 1] = 'v';
            str[len] = 'e';
            str[len + 1] = 's';
            str[len + 2] = '\0';
        }
        else if ((str[len - 2] == 'f') && (str[len - 1] == 'e'))
            {
                str[len - 2] = 'v';
                str[len - 1] = 'e';
                str[len] = 's';
                str[len + 1] = '\0';
            }
        else if ((str[len - 1] == 'y') &&
                 (str[len - 2] != 'a') &&
                 (str[len - 2] != 'i') &&
                 (str[len - 2] != 'u') &&
                 (str[len - 2] != 'e') &&
                 (str[len - 2] != 'o'))
        {
            str[len - 1] = 'i';
            str[len] = 'e';
            str[len + 1] = 's';
            str[len + 2] = '\0';
        }
        else
        {
            str[len] = 's';
            str[len + 1] = '\0';
        }
        printf("%s\n", str);
    }

    return 0;
}
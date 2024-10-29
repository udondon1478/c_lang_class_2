#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int N;

    scanf("%d", &N);
    char a[N][20];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", a[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i]['\0' - 1] == 's' || a[i]['\0' - 1] == "sh" || a[i]['\0' - 1] == "ch" || a[i]['\0' - 1] == 'o' || a[i]['\0' - 1] == 'x')
        {
            strcat(a[i], "es");
        }
        else if (a[i]['\0' - 1] == "f")
        {
            a[i]['\0' - 1] == "v";
            strcat(a[i], "es");
        }
        else if (a[i]['\0' - 1] == "e" && a[i]['\0' - 2] == "f")
        {
            a[i]['\0' - 2] == "v";
            a[i]['\0' - 1] == "e";
            strcat(a[i], "s");
        }
        else if (a[i]['\0' - 1] == "y" && (a[i]['\0' - 2] != "a" || a[i]['\0' - 2] != "i" || a[i]['\0' - 2] != "u" || a[i]['\0' - 2] != "e" || a[i]['\0' - 2] != "o"))
        {
            a[i]['\0' - 1] == "i";
            strcat(a[i], "es");
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%s\n", a[i]);
    }


    return 0;
}

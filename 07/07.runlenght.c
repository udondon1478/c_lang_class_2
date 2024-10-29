#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, count;
    char str[256];
    char temp[9 + 1];
    char decode[256] = "";

    scanf("%s", str);

    for (i = 0; i * 3 < (int)strlen(str); i++)
    {
        count = str[i * 3 + 1] - '0';
        for (j = 0; j < count; j++)
        {
            temp[j] = str[i * 3];
        }
        temp[j] = '\0';

        strcat(decode, temp);
        if (str[i * 3 + 2] == '*')
        {
            strcat(decode, "\n");
        }
    }
    printf("%s", decode);

    return 0;
}

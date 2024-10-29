#include <stdio.h>
#include <string.h>

#define MAX (50)

int main(int argc, char const *argv[])
{
    char str[MAX];

    scanf("%s", str); //文字列のスキャン

    //文字が'@'ならその後に続く数字(str[i]+1)の回数str[i+2]を印字し、iを+2することで暗号の後を続けて印字
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '@')
        {
            for (int j = 0; j < (str[i + 1] - '0'); j++)
            {
                printf("%c", str[i + 2]);
            }
            i += 2;
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}

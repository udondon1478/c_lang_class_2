#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[21];
    int len;
    scanf("%s", str);
    len = (int)strlen(str);
    int i;
    //1行目
    for (i = 0; i < len+2; i++)
    {
        printf("%c", 'a'+i);
    }
    
    printf("\n");
    //2行目
    printf("%c%s%c\n", 'a'+len+2, str, 'a'+len+3);
    //3行目
    int num_max = (len+4)+(len+2);
    for (i = len+4; i < 26; i++)
    {
        if (i>=num_max)
        {
            break;
        }
        printf("%c", 'a'+i);
    }
    printf("\n");
    return 0;
}

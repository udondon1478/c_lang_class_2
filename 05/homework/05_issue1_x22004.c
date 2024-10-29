#include <stdio.h>
#define MAX (1000)

int main(int argc, char const *argv[])
{
    char str[MAX+1];

    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
}

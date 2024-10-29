#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[11];
    int len;
    scanf("%s", str);
    len = (int)strlen(str);
    int i;
    char tmp;
    for (i = 0; i < len/2; i++)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
    
    printf("%s\n", str);
    return 0;
}

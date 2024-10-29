#include <stdio.h>

#define MAX (20)

int main(int argc, char const *argv[])
{
    char str[MAX];
    int n= 0;

    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            n++;
        }
        
    }
    
    printf("出力:大文字は%d個ありました\n", n);
    return 0;
}

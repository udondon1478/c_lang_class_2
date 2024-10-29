#include <stdio.h>
#define MAX (20)

int main(int argc, char const *argv[])
{
    char str[MAX+1];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i]++;
        printf("%c", str[i]);
    }
    
    printf("\n");
    return 0;
}
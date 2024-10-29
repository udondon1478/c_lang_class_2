#include <stdio.h>
#define MAX (20)

int main(int argc, char const *argv[])
{
    char str[MAX];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("*%c", str[i]);
    }
    
    printf("*\n");
    return 0;
}

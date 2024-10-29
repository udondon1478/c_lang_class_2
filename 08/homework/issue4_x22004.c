#include <stdio.h>
#define MAX (11)
int main(int argc, char const *argv[])
{
    int x = 0;
    char str[MAX];

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        x++;
    }

    for (int i = 0; i < x; i++)
    {
        printf("*");
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char country[5][21];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", country[i]);
    }

    printf("1st %s\n", country[0]);
    printf("2nd %s\n", country[1]);
    printf("3rd %s\n", country[2]);
    printf("4th %s\n", country[3]);
    printf("5th %s\n", country[4]);

    return 0;
}

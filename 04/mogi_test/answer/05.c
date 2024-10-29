#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, j;
    char S[31];
    scanf("%s", S);
    int len = (int)strlen(S);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < len + 2; j++)
        {
            if (i == 1 && 0 < j && j < len + 1)
            {
                printf("%c", S[j - 1]);
            }
            else
            {
                printf("a");
            }
        }
        printf("\n");
    }
    return 0;
}

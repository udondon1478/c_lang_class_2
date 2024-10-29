#include <stdio.h>
#include <string.h>
#define MAX (21)

int main(int argc, char const *argv[])
{
    int n;
    char S[MAX], c[2], R[MAX];
    int k = 0;
    int len = 0;

    scanf("%d %s %c %s", &n, S, c, R);
    strlen

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == c[0])
        {
            k = i;
            for (int j = 0; R[j] != '\0'; j++)
            {
                if (R[j] == '\0')
                {
                    break;
                }
                
                S[k] = R[j];
                k++;
            }
        }
    }
    


    for (int i = 0; S[i] != '\0'; i++)
    {
        printf("%c", S[i]);
    }
    putchar('\n');

    return 0;
}

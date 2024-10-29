#include <stdio.h>
#define STR_MAX (11)
int main(int argc, char const *argv[])
{
    char S[STR_MAX], s1[2], s2[2], s3[3];
    // null+1を確保するby澤野
    int i;

    scanf("%s", S);
    scanf("%s %s %s", s1, s2, s3);
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] != s1[0] && S[i] != s2[0] && S[i] != s3[0])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
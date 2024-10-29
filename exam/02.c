#include <stdio.h>
#define MAX (10)
int main(int argc, char const *argv[])
{
    char S[MAX+1];
    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++)
    {
        printf("%c\n", S[i]);
    }
    
    return 0;
}

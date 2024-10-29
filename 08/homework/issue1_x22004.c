#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x=0;
    scanf("%d", &n);

    char s[n+1];
    
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '>' && s[i+1] == '<')
        {
            x++;
        }
        
    }
    
    printf("%d\n", x);
    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX (4)
int main(int argc, char const *argv[])
{
    char s[MAX+1];
    scanf("%s", s);

    for (int i = 0; i < MAX; i++)
    {
        int j = i+1;
        if (s[i+1] == '\0')
        {
            printf("OK\n");
        }
        else if (s[i] == s[j])
        {
            continue;
        }
        else if (s[i] != s[j])
        {
            printf("NG\n");
            break;
        }
    }

    return 0;
}
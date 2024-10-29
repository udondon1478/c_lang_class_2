#include <stdio.h>
#include <string.h>
#define MAX (20)

int main(int argc, char const *argv[])
{
    char x[MAX], y[MAX], c[MAX*2], temp[MAX*2+1], temp2[MAX];
    int len1, len2, num = 0;

    scanf("%s", x);
    scanf("%s", y);
    len1 = strlen(x);
    len2 = strlen(y);

    for (int i = len1-1; i >= 0; i--)
    {
        temp[num] = x[i];
        num++;
    }

    num=0;

    for (int i = len2-1; i >= 0; i--)
    {
        temp2[num] = y[i];
        num++;
    }
    
    strcat(temp, temp2);
    printf("%s\n", temp);
    strcpy(c, temp);

    for (int i = 0; c[i] != '\0'; i++)
    {
        printf("%c", c[i]);
    }
    
    return 0;
}

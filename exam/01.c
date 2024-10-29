#include <stdio.h>
#include <string.h>
#define MAX 50

void strcat_longer(const char a[MAX], const char b[MAX], char c[MAX*2 + 1])
{
    int count_a=0, count_b=0;
    for (int i = 0; a[i] != '\0' ; i++)
    {
        count_a++;
    }
    
    for (int i= 0; b[i] != '\0'; i++)
    {
        count_b++;
    }
    
    if (count_a > count_b)
    {
        strcat(c, a);
        strcat(c, b);
    }else if (count_a < count_b)
    {
        strcat(c, b);
        strcat(c, a);
    }else if (count_a == count_b)
    {
        strcat(c, a);
        strcat(c, b);
    }
}

int main(int argc, char const *argv[])
{
    char a[MAX+1], b[MAX+1], c[MAX*2 + 1] = "";
    scanf("%s", a);
    scanf("%s", b);

    strcat_longer(a, b, c);
    printf("%s\n", c);
    return 0;
}
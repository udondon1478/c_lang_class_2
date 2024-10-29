#include <stdio.h>
#define MAX (20)

int strEq(char *s1, char *s2)
{
    int i=0;
    while (1)
    {

        if (*s1+i != *s2+i)
        {
            return 0;
        }
        else if (*s1 == '\0')
        {
            break;
        }else{
            s1+=1;
            s2+=1;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char s1[MAX], s2[MAX];
    printf("input 1: ");
    scanf("%s", s1); //入力

    printf("input 2: ");
    scanf("%s", s2); //入力

    printf("%sと%sは", s1, s2);
    if (strEq(s1, s2) == 1)
    {
        printf("一致している\n");
    }
    else
    {
        printf("一致していない\n");
    }

    return 0;
}

#include <stdio.h>
#define MAX (1000)
int main(int argc, char const *argv[])
{
    int x;
    int left=0, right=0, len=0;
    char s[MAX];
    char set;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    len-=1; //符号を数から除外

    for (int i = 0; s[i] != '\0'; i++)
    {
        left++;
        if (s[i] == '-')
        {
            set = '-';
            break;
        }
        else if (s[i] == '+')
        {
            set = '+';
            break;
        }
    }
    right=len-left;

    if (set=='-')
    {
        printf("%d\n", right-left);
    }else{
        printf("%d\n", len);
    }
    
    return 0;
}

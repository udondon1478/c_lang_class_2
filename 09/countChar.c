#include <stdio.h>
countChar (char *str, char alphabet){
    int x=0;
    while (*str != '\0')
    {
        if (*str == alphabet)
        {
            x++;
        }
        str++;
    }
    return x;
}
int main(int argc, char const *argv[])
{
    char str[20], alphabet;
    scanf("%s %c", str, &alphabet); //入力
    printf("%d\n", countChar(str, alphabet));
    return 0;
}
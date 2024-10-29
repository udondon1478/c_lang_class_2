#include <stdio.h>
#define MAX (20)

int main(int argc, char const *argv[])
{
    char str[MAX];
    int n = 0, dif = 0;

    scanf("%d", &n);  //何文字進めるか
    scanf("%s", str); //文字列の入力

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            dif = (str[i] + n  - 'a') % 26; //「'a'からの距離」のあまり
            str[i] = 'a' + dif;
        }
        else if ('A' <= str[i] && str[i] <= 'Z')
        {
            dif = (str[i] + n - 'A') % 26;  //「'A'からの距離」のあまり
            str[i] = 'A' + dif;
        }
    }

    printf("%s\n", str);
    return 0;
}

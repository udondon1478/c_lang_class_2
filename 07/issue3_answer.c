#include <stdio.h>
#define MAX (100)

int main(int argc, char const *argv[])
{
    int i, max, ind = 0;
    char str[MAX];
    int count[26] = {0}; //各アルファベットの出現回数を格納する配列

    scanf("%s", str); //文字列の読み取り

    //先頭から順番に文字を見ていく
    for (i = 0; str[i] != '\0'; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            /*
            count[0] -> 'a'の出現回数
            count[1] -> 'b'の出現回数
            count[25] -> 'z'の出現回数

            str[i]- 'a' -> 'a'からのズレ

            str[i]-'a'だとしたら、'a'-'a' -> 0
            count[0] = count[0] + 1;

            str[i]='b'だとしたら、'b'-'a' -> 1
            count[1] = count[1] + 1;
            */
            count[str[i] - 'a']++;
        }
        else if ('A' <= str[i] && str[i] <= 'Z')
        { //大文字
            count[str[i] - 'A']++;
        }
    } //ここまでで、各アルファベットの出現回数が確定

    max = count[0]; //最大値(暫定)
    ind = 0;        //最大値を与えるインデックス(暫定)
    for (i = 0; i < 26; i++)
    {
        if (max < count[i])
        {
            max = count[i]; //最大値を更新
            ind = i //最大値を取る時のインデックスを記憶
        }
    }   //出現回数が最大の文字が確定

    putchar('A' + ind);
    putchar('\n');

    return 0;
}

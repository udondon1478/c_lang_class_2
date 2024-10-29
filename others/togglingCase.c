#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch; //一文字分の変数
    while (1)
    {
        scanf("%c", &ch); // 1文字の取得
        if (ch == '\n')   //改行かチェック
        {
            break;
        }
        if (('a' <= ch) && (ch <= 'z')) //小文字チェック
        {
            ch = (ch - 'a') + 'A';  //小文字を大文字に変換
        }else if (('A' <= ch) && (ch <= 'Z'))   //大文字チェック
        {
            ch = (ch - 'A') + 'a'; //大文字から小文字に変換
        }
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}

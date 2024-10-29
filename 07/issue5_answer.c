#include <stdio.h>
#include <string.h>
#define MAX (100)

int main(int argc, char const *argv[])
{
    int i, j;
    int start = 0, end = 0; //開始位置、終了位置
    int flag = 0;           //読み取り位置 0:読み取ってない
    // 1:読み取り中
    char str[MAX];

    scanf("%s", str);

    for (i = 0; i < (int) strlen(str); i++)
    {
        if (str[i] == '"' && flag == 0)
        {
            start = i + 1; //""の1文字後ろ
            flag = 1;      //フラグを上げ、リテラルのscan開始
        }
        else if (str[i] == '"')
        {
            end = i - 1; //""の1文字前
            flag = 0;    //フラグを下げ、リテラルのscan開始

            //ダブルクォーテーションで囲まれた箇所を出力
            for (j = start; j <= end; j++)
            {
                putchar(str[j]);
            }
            putchar('\n');
        }
    }

    return 0;
}
#include <stdio.h>
#define W (100) //幅の最大値
#define H (100) //高さの最大値
//配列に入力
void inputArr(char sharp[H][W], int w, int h)
{
    int x, y; //横と縦

    //二次元配列の走査
    for (y = 0; y < h; y++) //縦から順に
    {
        for (x = 0; x < w; x++)
        {
            sharp[y][x] = '#'; //入力
        }
    }
}
//中身を変更
void changeArr(char sharp[H][W], int w, int h)
{
    int x, y;

    for (y = 0; y < h; y++)
    {
        for (x = 0; x < w; x++)
        {
            if (x % 2 == 0)
            {
                sharp[y][x] = '.';
            }
        }
    }
}
void printArr(char sharp[H][W], int w, int h)
{
    int x, y; //横と縦

    //二次元配列の走査
    for (y = 0; y < h; y++)
    {
        for (x = 0; x < w; x++)
        {
            printf("%c", sharp[y][x]); //印字
        }
        printf("\n"); //改行
    }
}
int main(int argc, char const *argv[])
{
    int x, y, w, h;
    char sharp[H][W]; //配列の宣言

    scanf("%d %d", &w, &h);

    //配列に入力する関数
    inputArr(sharp, w, h);

    //配列の中身を変更する関数
    changeArr(sharp, w, h);

    //配列を印字する関数
    printArr(sharp, w, h);

    return 0;
}

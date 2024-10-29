#include <stdio.h>
//マクロで配列サイズの最大値の設定
#define W (10) //幅
#define H (10) //高さ

//プロトタイプ宣言
//配列に入力する関数
void inputArr(char sharp[H][W], int w, int h);
//配列を印字する関数
void printArr(char sharp[H][W], int w, int h);
//配列に入力する関数
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
void printArr(char sharp[H][W], int w, int h)
{
    int x, y; //横と縦

    //二次元配列の走査
    for (y = 0; y < h; y++)
    {
        for (x = 0; x < W; x++)
        {
            printf("%c", sharp[y][x]); //印字
        }
        printf("\n"); //改行
    }
}
int main(int argc, char const *argv[])
{
    char sharp[H][W]; //二次元配列
    int w, h;         //幅と高さ
    printf("w h:");
    scanf("%d %d", &w, &h);

    //配列に入力する関数
    inputArr(sharp, w, h);

    //配列を印字する関数
    printArr(sharp, w, h);

    return 0;
}

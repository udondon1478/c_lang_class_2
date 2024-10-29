#include <stdio.h>
int main(int argc, char const *argv[])
{
    int w=4, h=6;   //高さと幅を宣言

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)     //wを満たしたら改行する、hを満たすまで続行
        {
            printf("#");        //横方向へ印字
        }
        printf("\n");       //改行
    }
    return 0;
}

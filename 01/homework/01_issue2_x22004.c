#include <stdio.h>
int main(int argc, char const *argv[])
{
    int h, w, sum=0;
    scanf("%d %d", &h, &w);     //高さと幅の代入

    int a[h][w];    //hとwをもとにした配列
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            scanf("%d", &a[i][j]);    //aを配列に格納
        }
    }
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            sum += a[i][j]; //合計の計算
        }
        
    }

    printf("%d\n", sum);  //合計の印字
    return 0;
}

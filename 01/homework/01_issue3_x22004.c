#include <stdio.h>
int main(int argc, char const *argv[])
{
    int h, w, sum = 0;
    scanf("%d %d", &h, &w); //高さと幅をスキャン

    char str[h][w]; //高さの分文字列の配列を確保

    for (int i = 0; i < h; i++)
    {
        scanf("%s", str[i]);
        for (int j = 0; j < w; j++)
        {
            if (str[i][j] == 'o')
            {
                sum++;  //oの時のみsumをインクリメント
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int w, h;
    scanf("%d %d", &w, &h);
    char a[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1) //上端・下端、左端・右端なら
            {
                a[i][j] = '#'; //最大値or最小値だったら#を代入
            }
            else
            {
                a[i][j] = '.'; //そうでなければ.を代入
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

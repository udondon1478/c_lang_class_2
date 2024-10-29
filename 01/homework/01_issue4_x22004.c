#include <stdio.h>
int main(int argc, char const *argv[])
{
    int h, w, sum = 0;
    scanf("%d %d", &h, &w);

    int point[h][w]; //得点用の配列
    char str[h][w];  // ox用の配列

    for (int i = 0; i < h; i++)
    {
        scanf("%s", str[i]); // oxを格納
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            scanf("%d", &point[i][j]); //得点を配列に格納
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (str[i][j] == 'o')
            {
                sum += point[i][j]; // str[i][j]がoだった時のみstr[i][j]の得点(point[i][j])を加算
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, h;
    int highest = 0;
    int temp = 0;
    int flag = 0;
    scanf("%d %d", &n, &h);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < count; j++) //5
    {
        for (int i = 0; i < h; i++) // 中間点までの処理
        {
            if (highest < a[i]) // 最大値を上回ったら上書き
            {
                highest = a[i];
            }
        }
        for (int i = h; i < n; i++) // 中間点から先の処理
        {
            if (highest < a[i])
            {
                highest = a[i];
            }
        }
        if (highest < a[h])
        {
            printf("%d\n", a[h]);
            flag++; // 中間点の値が最も高いかのチェック(noneを出力するか)
        }
    }
    return 0;
}

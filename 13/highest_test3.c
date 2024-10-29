#include <stdio.h>
int main(int argc, char const *argv[])
{
#include <stdio.h>

    // 入力
    int n, h;
    int flag = 0;
    scanf("%d %d", &n, &h);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // 処理
    for (int i = 0; i < n; i++)
    {
        int max_val = 0;
        for (int j = i - h; j < i; j++) // 中間点までの処理
        {
            if (a[j] > max_val)
            {
                max_val = a[j];
            }
        }
        for (int j = i + 1; j <= i + h; j++) // 中間点から先の処理
        {
            if (a[j] > max_val)
            {
                max_val = a[j];
            }
        }
        if (a[i] > max_val) // 中間点の両辺に中間点より大きい値がある場合は出力しない
        {
            printf("%d\n", a[i]);
            flag = 1;
        }
    }

    if (flag == 0) // フラグが立たなければnone
    {
        printf("none\n");
    }

    return 0;
}

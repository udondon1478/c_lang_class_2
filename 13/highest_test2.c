#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, h;
    int highest;
    int temp = 0;
    int flag = 0;
    int j = 1;
    scanf("%d %d", &n, &h);

    int a[n];
    j=h;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    while (1)
    {
        if ((j * 2 + 1) % h) // 両辺に指定された数が隣り合っているか
        {
            highest = a[h];
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
            if (highest == a[h])
            {
                printf("%d\n", a[h]);
                flag=1; // 中間点の値が最も高いかのチェック(noneを出力するか)
            }
            j++;
        }else{
            break;
        }
    }
    
    return 0;
}

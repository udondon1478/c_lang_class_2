#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    int i, hh, mm;
    int N;
    int t_hh, t_mm;
    int max_hh = 8;
    int max_mm = 59;
    int best_hh, best_mm;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &N);

    int flag = 0; // 最初のベストを登録するため
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &t_hh, &t_mm); // 電車時刻の入力
        mm = t_mm + b + c;            // 電車と徒歩の加算
        hh = t_hh + (int)(mm / 60);   // 時間更新
        mm %= 60;                     // 分更新

        if (max_hh < hh) // 遅刻確定なので飛ばす
        {
            continue;
        }
        if (flag == 0)
        {
            best_hh = hh;
            best_mm = mm;
            flag = 1; // 一回だけ動く
            continue;
        }
        else
        {

            if ((hh > best_hh) ||
                ((best_hh == hh) && (best_mm < mm)))
            {
                best_hh = hh;
                best_mm = mm;
            }
        }
    }
    best_mm = best_mm - a - b - c;
    while (best_mm < 0)
    {
        best_mm = 60 + best_mm;
        best_hh = best_hh - 1;
    }
    printf("%02d:%02d\n", best_hh, best_mm);

    return 0;
}

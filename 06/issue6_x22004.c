#include <stdio.h>
#define N_MAX (10)
#define STR_MAX (100)

int main(int argc, char const *argv[])
{
    int n, m, i, j;
    int a[N_MAX];            //秒数確保
    char b[N_MAX][STR_MAX];  //叫ぶ文字
    int first_word_checking; //最初の単語を出力したかチェック

    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) //登録
    {
        scanf("%d %s", &a[i], b[i]);
    }
    for (i = 1; i <= n; i++) //時間のループ
    {
        first_word_checking = 0; //出力していない
        for (j = 0; j < m; j++)  //パフォーマーのループ
        {
            if (i % a[j] == 0)
            {
                if (first_word_checking == 1)
                {
                    printf(" ");
                }
                printf("%s", b[j]);
                first_word_checking = 1;
            }
        }
        if (first_word_checking == 0)
        {
            printf("%d", i);
        }
    }

    printf("\n");

    return 0;
}

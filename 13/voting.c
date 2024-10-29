#include <stdio.h>
#define MAX_PEOPLE (100)

int main(int argc, char const *argv[])
{
    int M, N, K, i, j, s_num;   //M=アイドルの数 N=支持者の数 K=アピール回数 i,j=for文のため s_num=idを格納
    int supporter[MAX_PEOPLE];  //
    int max_supporter = -1, max_people = -1;
    scanf("%d %d %d", &M, &N, &K);
    // 初期化
    for (i = 0; i < M; i++)
    {
        supporter[i] = 0;
    }
    supporter[M] = N; // 無支持
    for (i = 0; i < K; i++)
    {
        scanf("%d", &s_num); // アピールID
        int count = 0;
        for (j = 0; j < M + 1; j++)
        {
            if (s_num - 1 != j && supporter[j] > 0)
            {
                supporter[j] -= 1; // 支持者ヘル
                count++;           // 移動した支持者
            }
        }
        supporter[s_num - 1] += count; // 支持者ゲット
    }
    for (i = 0; i < M; i++) // アイドルの数でループ
    {
        if (max_people < supporter[i])
        {
            max_people = supporter[i];  //支持者の人数
            max_supporter = i + 1;  //アイドルのID
        }
    }
    printf("%d\n", max_supporter);  //最小のIDで一番人気
    for (i = max_supporter; i < M; i++)
    {
        printf("%d\n", i+1);    //該当者
    }
    
    return 0;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N, M;
    int count_a = 0, count_b = 0;
    int score = 0;
    int i = 0, j = 0, k = 0;

    scanf("%d %d,", &N, &M);

    int a[N], b[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a[count_a], &b[count_b]);
        count_a++;
        count_b++;
    }

    for (int i = 0; i < N; i++)
    {
        score = a[j] - 5 * b[k];
        if (score < 0)
        {
            score = 0;
        }
        
        if (score >= M)
        {
            printf("%d\n", i+1);
        }
        j++;
        k++;
    }

    return 0;
}

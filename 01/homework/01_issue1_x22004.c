#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, t, w, sum = 0;
    scanf("%d %d", &n, &t);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &w);
        if (w >= t) //指定の重さ以上あるか
        {
            sum += w;
        }
    }
    printf("%d\n", sum);
    return 0;
}

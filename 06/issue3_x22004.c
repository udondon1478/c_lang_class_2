#include <stdio.h>
#define N_MAX (10)

int main(int argc, char const *argv[])
{
    int i, n, s[10];
    int m;
    int a, b, x;
    int tmp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &a, &b, &x);
        if (s[a]<x)
        {
            tmp= s[a];
        }else{
            tmp = x;
        }
        
        s[a] = s[a] - tmp;
        s[b] = s[b] + tmp;
        //printf("a=%d, b=%d, x=%d\n", a, b, x); デバッグ
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", s[i]);
    }
    
    return 0;
}

#include <stdio.h>
#define MAX (10)
typedef struct _member
{
    int jap;
    int mat;
    int sci;
} Member;

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    struct Member[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &Member[i]->jap, &Member[i]->mat, &Member[i]->sci);
    }

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        x = (Member[i]->jap + Member[i]->mat + Member[i]->sci) / 3;
        printf("%d\n", x);
    }
    return 0;
}

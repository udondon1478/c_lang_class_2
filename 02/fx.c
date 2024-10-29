#include <stdio.h>
#define MAX (5)
int func(int x)
{
    int fx; //返り値の宣言
    fx = 2 * x + 1;
    return fx;
    /*return (2 * x + 1);だけでも可能*/
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("f(%d)=%d\n", i, func(i));
    }
    return 0;
}

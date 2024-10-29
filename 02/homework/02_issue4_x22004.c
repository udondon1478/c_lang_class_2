#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x); //キーボード入力

    for (int i = 0; i <= x; x--)
    {
        if (x / 10 == 3 || x % 10 == 3 || x % 3 == 0)
        {
            if (x > 0)
            {
                printf("プログラミング\n"); // ifを満たしてxが0でない場合
            }
            else
            {
                printf("%d\n", x); // 0の場合
            }
        }
        else
        {
            printf("%d\n", x);
        }
    }
    return 0;
}
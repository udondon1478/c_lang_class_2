#include <stdio.h>
#define LEN (100) //文字列の長さ

void encloser(char array[LEN], int len)
{
    int x, y;
    for (y = 0; y < 3; y++)
    {
        for (x = 0; x < len + 2; x++)
        {
            if (y == 1)
            {
                if (x == 0 || x == len + 1) //文字の前と後ろだけ
                {
                    printf("*");
                }
                else
                {
                    printf("%c", array[x - 1]);
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int n;
    char array[LEN];

    scanf("%d", &n);    //文字列の長さ
    scanf("%s", array); //文字列の入力

    encloser(array, n);
    return 0;
}

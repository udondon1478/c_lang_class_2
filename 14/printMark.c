#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getMark(void)
{
    return rand() % 4;
}

void printMark(int n)
{
    char mark[4][8] = {"Diamond", "Spade", "Heart", "Club"};
    printf("%s", mark[n]);
}

int main(int argc, char const *argv[])
{
    int mark;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 5; i++)
    {
        printf("%d回目;", i + 1);
        mark = getMark(); // カード番号の取得
        printMark(mark);  // カード番号の表示
        printf("\n");
    }
    return 0;
}

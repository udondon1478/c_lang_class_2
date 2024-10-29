#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRank(void)
{
    return rand() % 12;
}

void printRank(int n)
{
    char rank[13][6] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    printf("%s", rank[n]);
}

int main(int argc, char const *argv[])
{
    int rank;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 5; i++)
    {
        printf("%d回目;", i + 1);
        rank = getRank(); // カード番号の取得
        printRank(rank);  // カード番号の表示
        printf("\n");
    }
    return 0;
}

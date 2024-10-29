#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRank(void)
{
    return rand() % 12;
}

int getMark(void)
{
    return rand() % 4;
}

void printRank(int n)
{
    char rank[13][6] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    printf("%s", rank[n]);
}

void printMark(int n)
{
    char mark[4][8] = {"Diamond", "Spade", "Heart", "Club"};
    printf("%s", mark[n]);
}


void solitaire(int mark, int rank)
{
    printf("引いたカードは、");

    printRank(rank);
    printf(" of ");
    printMark(mark);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int rank, mark;
    int i;
    int flag = 0;

    srand((unsigned)time(NULL));

    while (1)
    {
        if (flag == 0)
        {
            printf("カードを1枚引いてください。(1:ひく 0:やめる)\n");
            scanf("%d", &flag);
        }else{
            printf("もう一度引きますか？(1:ひく 0:やめる)\n");
            scanf("%d", &flag);
        }
        if (flag == 0)
        {
            break;
        }

        mark = getMark();
        rank = getRank();

        solitaire(mark, rank);
    }

    return 0;
}

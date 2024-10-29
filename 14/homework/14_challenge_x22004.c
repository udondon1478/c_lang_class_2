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
    switch (rank)
    {
    case 1:
        printf("今日の運勢は、「大吉」です。");
        break;
    case 2:
        printf("今日の運勢は、「大凶」です。");
        break;
    case 3:
        printf("今日の運勢は、「大凶」です。");
        break;
    case 4:
        printf("今日の運勢は、「凶」です。");
        break;
    case 5:
        printf("今日の運勢は、「凶」です。");
        break;
    case 6:
        printf("今日の運勢は、「末吉」です。");
        break;
    case 7:
        printf("今日の運勢は、「末吉」です。");
        break;
    case 8:
        printf("今日の運勢は、「末吉」です。");
        break;
    case 9:
        printf("今日の運勢は、「小吉」です。");
        break;
    case 10:
        printf("今日の運勢は、「小吉」です。");
        break;
    case 11:
        printf("今日の運勢は、「中吉」です。");
        break;
    case 12:
        printf("今日の運勢は、「中吉」です。");
        break;
    case 13:
        printf("今日の運勢は、「吉」です。");
        break;
    default:
        break;
    }
    switch (mark)
    {
    case 1: //ダイヤ
        printf("あなたのラッキーカラーは「青色」です。\n");
        break;
    case 2: //スペード
        printf("あなたのラッキーカラーは「黄色」です。\n");
        break;
    case 3: //ハート
        printf("あなたのラッキーカラーは「赤色」です。\n");
        break;
    case 4: //クラブ
        printf("あなたのラッキーカラーは「緑色」です。\n");
        break;
    default:
        break;
    }
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
    printf("今日も素敵な一日になりますように・・・\n一人占いを終了します。\n");

    return 0;
}

#include <stdio.h>

typedef struct _Ability
{
    int hp;
    int of;
    int df;
} Ability;

int main(int argc, char const *argv[])
{
    Ability sa, wa;
    int flag = 0;
    int turn = 0;

    sa.hp = 220;
    sa.of = 15;
    sa.df = 5;

    wa.hp = 400;
    wa.of = 20;
    wa.df = 7;

    while (1)
    {
        if (flag == 0) // 勇者のターン
        {
            wa.hp -= (sa.of - wa.df) / 2;
            flag++;
            turn++;
        }
        else if (flag == 1)
        {
            sa.hp -= (wa.of - sa.df) / 2;
            flag--;
            turn++;
        }

        if (wa.hp <= 0)
        {
            printf("%dターンで勇者の勝利! 勇者残りHP: %d\n", turn, sa.hp);
            break;
        }
        else if (sa.hp <= 0)
        {
            printf("%dターンで魔王の勝利! 魔王残りHP: %d\n", turn, wa.hp);
            break;
        }
    }

    return 0;
}

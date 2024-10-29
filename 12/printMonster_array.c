#include <stdio.h>
#include <string.h>

#define NUM_MONSTER 4

struct _monster
{
    char name[30];
    int hp;
    int attack;
};

typedef struct _monster Monster;

int main(int argc, const char *argv[])
{

    // 構造体配列の初期化
    Monster monster[NUM_MONSTER] = {
        {"suzaku", 200, 130},
        {"seiryu", 250, 160},
        {"byakko", 180, 100},
        {"genbu", 350, 80},
    };
    // ステータスの表示
    printf("名前:%s HP:%d 攻撃力:%d\n", monster[0].name, monster[0].hp, monster[0].attack);
    printf("名前:%s HP:%d 攻撃力:%d\n", monster[1].name, monster[1].hp, monster[1].attack);
    printf("名前:%s HP:%d 攻撃力:%d\n", monster[2].name, monster[2].hp, monster[2].attack);
    printf("名前:%s HP:%d 攻撃力:%d\n", monster[3].name, monster[3].hp, monster[3].attack);
    printf("名前:%s HP:%d 攻撃力:%d\n", monster[4].name, monster[4].hp, monster[4].attack);
    return 0;
}
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
    int i;

    // 構造体配列の初期化
    Monster monster[NUM_MONSTER] = {
        {"suzaku", 200, 130},
        {"seiryu", 250, 160},
        {"byakko", 180, 100},
        {"genbu", 350, 80},
    };
    // ステータスの表示
    for (i = 0; i < NUM_MONSTER; i++)
    {
        printf("名前:%s HP:%d 攻撃力:%d\n", monster[i].name, monster[i].hp, monster[i].attack);
    }
    
    return 0;
}
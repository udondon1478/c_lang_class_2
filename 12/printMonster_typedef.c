#include <stdio.h>
#include <string.h>

typedef struct _monster
{
    char name[30];
    int hp;
    int attack;
}Monster;

int main(int argc, const char *argv[])
{
    Monster suzaku;

    suzaku.hp = 200;
    suzaku.attack = 130;
    strcpy(suzaku.name, "suzaku");

    printf("名前:%s HP:%d 攻撃力:%d\n", suzaku.name, suzaku.hp, suzaku.attack);

    return 0;
}
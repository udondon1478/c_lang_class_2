#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getrank(void)
{
    return rand() % 12;
}

int main(int argc, char const *argv[])
{
    int i;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 5; i++)
    {
        printf("%d回目 : %d\n", i + 1, getrank() + 1);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int throwDice (void){
    return rand() % 6 +1;
    return;
}

int main(int argc, char const *argv[])
{
    int i;
    int d1, d2;
    srand((unsigned)time(NULL));

    for (i = 0; i <- 10; i++)
    {
        d1 = throwDice();
        d2 = throwDice();
        printf("%2d回目; %d %d %2d\n", i, d1, d2, d1 + d2);
    }
    
    return 0;
}

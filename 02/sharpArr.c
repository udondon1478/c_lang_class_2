#include <stdio.h>

#define W (5)
#define H (6)

int main(int argc, char const *argv[])
{
    int x, y;
    char sharp[H][W];

    for (y = 0; y < H; y++)
    {
        for (x = 0; x < W; x++)
        {
            sharp[x][y] = '#';
        }
        
    }
    
    for (y = 0; y < H; y++)
    {
        for (x = 0; x < W; x++)
        {
            printf("%c", sharp[x][y]);
        }
        printf("\n");
    }
    return 0;
}

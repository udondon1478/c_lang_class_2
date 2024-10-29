#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "/Users/x22004xx/src/prg2/Univercity Programming/20221215/homework/movement_data.txt"

typedef struct _point
{
    int x;
    int y;
} Point;

Point calculatePoint(Point pt, Point v_pt)
{
    pt.x += v_pt.x;
    pt.y += v_pt.y;
    return pt;
}

int main(int argc, char const *argv[])
{
    FILE *fp;
    Point pivot;
    Point distance;

    pivot.x = 0;
    pivot.y = 0;

    if ((fp = fopen(FILE_NAME, "r")) == NULL)
    {
        printf("ファイルがオープンできません\n");
        exit(1);
    }

    while (1)
    {
        if (fscanf(fp, "%d,%d", &distance.x, &distance.y) != 2)
        {
            break;
        }
        pivot = calculatePoint(pivot, distance);
    }

    printf("%d,%d\n", pivot.x, pivot.y);
    fclose(fp); // 12月21日 21:35追記

    return 0;
}

// 39行目のfscanfの戻り値について参考にしたサイト:https://www.ibm.com/docs/ja/i/7.1?topic=ssw_ibm_i_71/rtref/fscanf.html
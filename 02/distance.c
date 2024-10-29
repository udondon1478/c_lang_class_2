#include <stdio.h>
#include <math.h>   //ルート用

int main(int argc, char const *argv[])
{
    double x1, x2, y1, y2, dist;

    printf("1点目: ")
    scanf("%f %f", x1, y1);
    printf("2点目: ")
    scanf("%f %f", x2, y2);

    dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("距離: %f"m dist)
    return 0;
}

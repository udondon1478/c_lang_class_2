#include <stdio.h>
#include <math.h>

typedef struct _point
{
    int x;
    int y;
} Point;

typedef struct _triangle
{
    Point point[3];
} Triangle;

double area(Triangle tri)
{
    double a, b, c;
    double S, s;

    a = sqrt(pow((tri.point[1].x - tri.point[0].x), 2) + pow((tri.point[1].y - tri.point[0].y), 2));
    b = sqrt(pow((tri.point[2].x - tri.point[1].x), 2) + pow((tri.point[2].y - tri.point[1].y), 2));
    c = sqrt(pow((tri.point[0].x - tri.point[2].x), 2) + pow((tri.point[0].y - tri.point[2].y), 2));
    //Ax=0.x Bx=1.x Cx=2.x

    s = (a + b + c) / 2;
    
    S = sqrt(s*(s-a)*(s-b)*(s-c));
    return S;
}

int main(int argc, const char *argv[])
{
    int i;
    Triangle triangle = {
        // 構造体が入れ子になったときの初期化
        {
            // Point型配列 point[3]の各要素の初期化
            {0, 0}, // point[0]のメンバx, yの初期化
            {0, 0}, // point[1]のメンバx, yの初期化
            {0, 0}, // point[2]のメンバx, yの初期化
        },
    };

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &triangle.point[i].x, &triangle.point[i].y);
    }

    printf("%f\n", area(triangle)); // 面積を表示
    return 0;
}
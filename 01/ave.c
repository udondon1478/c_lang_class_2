#include <stdio.h>
int MAX(int x)
{
    double ans;
    ans = x/3.0;
    return ans;
}
int main(int argc, const char *argv[])
{
    int sum=0, height[3] = {177, 188, 150};
    double ave=0;
    for (int i = 0; i < 3; i++)
    {
        sum += height[i];
    }
    ave = MAX(sum);
    printf("%f", ave);
    return 0;
}

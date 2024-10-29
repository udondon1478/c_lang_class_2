#include <stdio.h>

//和の関数
int add(int c, int d){
    return (c+d); //和
}
int main(int argc, const char *argv[])
{
    int a = 5, b = 10;
    printf("add = %d\n", add(a, b));    //関数の利用
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char string[] = "hello, world\n";
    
    for (int i = 0; i < 5; i++) //string[]がnullになるまで
    {
        putchar(string[i]);
    }
    
    return 0;
}
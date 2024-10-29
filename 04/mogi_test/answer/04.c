#include <stdio.h>
#define MAX (26)    //a-zまでの数

int main(int argc, char const *argv[])
{
    int i, row;
    /*printf("列数: ");*/
    scanf("%d", &row); //列数の入力
    for (int i = 0; i < 26; i++)
    {
        if (i != 0 && i%row ==0)
        {
            printf("\n");
        }
        printf("%c", 'a'+i);
    }
    printf("\n");
    return 0;
}

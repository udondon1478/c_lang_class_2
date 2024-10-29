#include <stdio.h>
#include <stdlib.h>

// ファイルの場所
#define FILE_NAME "/Users/x22004xx/src/prg2/Univercity Programming/20221215/input.txt"

int main(int argc, char const *argv[])
{
    FILE *fp;
    int a, b;

    if ((fp = fopen(FILE_NAME, "r")) == NULL)
    {
        printf("ファイルがオープンできません\n"); // エラーメッセージ
        exit(1);
    }

    while (1)
    {
        fscanf(fp, "%d %d", &a, &b);
        
        if (a==0 && b==0)
        {
            break;
        }
        fprintf(stdout, "%d\n", a + b);
    }

    fclose(fp);
    return 0;
}
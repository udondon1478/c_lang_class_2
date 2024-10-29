#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "/Users/x22004xx/src/prg2/Univercity Programming/20221208/filewrite.txt"

int main(int argc, char const *argv[])
{
    FILE *fp;
    int num;

    if ((fp = fopen(FILE_NAME, "w")) == NULL)
    {
        fprintf(stderr, "ファイルがオープンできません\n");
        exit(1); //強制終了
    }

    while (1)
    {
        fscanf(stdin, "%d", &num); //キーボードで入力
        if (num < 0)
        {
            break;
        }

        fprintf(fp, "%d", num);

        fclose(fp);
        return 0;
    }
}

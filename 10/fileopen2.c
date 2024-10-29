#include <stdio.h>
#include <stdlib.h>

//ファイルの場所
#define FILE_NAME "/Users/x22004xx/src/prg2/Univercity Programming/20221208/fileopen2.c"

int main(int argc, char const *argv[])
{
    FILE *fp; //ファイル型のポインタ
    char c;
    //ファイルのオープン (ファイルが存在するかの確認の処理)
    if ((fp = fopen(FILE_NAME, "r")) == NULL)
    {
        fprintf(stderr, "ファイルがオープンできません\n");
        exit(1);    //強制終了
    }

    while (fscanf(fp, "%c", &c) != EOF) //EOF: ファイルの終了
    {
        printf("%c", c);    //一文字ずつ出力
    }
    
    fclose(fp); //ファイルのクローズ

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//ファイルの場所
#define FILE_NAME "/Users/x22004xx/src/prg2/Univercity Programming/20221208/fileave.txt"

int main(int argc, char const *argv[])
{
    FILE *fp;
    double sum = 0.0;
    double data;
    int n = 0;

    //ファイルのオープン(ファイルが存在するか確認の処理)
    if ((fp = fopen(FILE_NAME, "r")) == NULL)
    {                                             //ひらけないとき
        printf("ファイルがオープンできません\n"); //エラーメッセージ
        exit(1);                                  //強制終了
    }

    while (fscanf(fp, "%lf", &data) != EOF) //EOF:ファイルの終了
    {
        sum+=data;  //加算
        n++;    //読み取った個数を数える
    }
    fprintf(stdout, "Average = %f\n", sum / (double) n );

    fclose(fp);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "/Users/x22004xx/src/prg2/Univercity Programming/20221215/fileave.in"

int main(int argc, char const *argv[])
{
    FILE *fp;
    double num, sum=0.0;
    double ave=0.0;

    if ((fp = fopen(FILE_NAME, "r")) == NULL)
    {
        printf("ファイルがオープンできません\n");
        exit(1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        fscanf(fp, "%lf", &num);
        sum+=num;
    }
    
    ave=sum/10;
    printf("Average = %lf\n", ave);
    return 0;
}

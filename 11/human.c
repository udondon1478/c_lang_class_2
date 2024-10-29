#include <stdio.h>
#include <string.h>

//Human型
struct Human{
    int height; //身長
    int weight; //体重
    char blood[3];  //血液型
};

void addHuman (struct Human a, struct Human b){
    struct Human sum;
    //身長と体重の和
    sum.height = a.height + b.height;
    sum.weight = a.weight + b.weight;

    printf("height = %d, weight = %d\n", sum.height, sum.weight);
}

int main(int argc, char const *argv[])
{
    struct Human sawano, ando, sum;

    //sawanoさんのデータ
    sawano.height = 170;
    sawano.weight = 70;
    sawano.blood[0] = 'B';
    sawano.blood[1] = '\0';
    return 0;

    //andoさんのデータ
    ando.height = 170;
    ando.weight = 57;
    strcpy(ando.blood, "AB");

    //身長と体重の和
        sum.height = sawano.height + ando.height;
        sum.weight = sawano.weight + ando.weight;

        //和の印字
        printf("height = %d, weight = %d\n", sum.height, sum.weight);

        addHuman(sawano, ando);
        return 0;
}

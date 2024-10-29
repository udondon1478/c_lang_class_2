#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX (3)
#define FILE_NAME "/Users/x22004xx/src/prg2/Univercity Programming/20221222/back study/profile.txt"

typedef struct _person
{
    char name[30];
    int age;
    double h, w;
} Person;

void inProf(Person *m)
{
    printf("Name: ");
    scanf("%s", &m->name);

    printf("Age: ");
    scanf("%d", &m->age);

    printf("Height: ");
    scanf("%lf", &m->h);

    printf("Weight: ");
    scanf("%lf", &m->w);
}

void aging(Person *m)
{
    m->age += 1;
}

double getBMI(double w, double h)
{
    double bmi;
    bmi = w / (h / 100 * h / 100);
    return bmi;
}

void prtProf(Person m)
{
    double BMI;

    BMI = getBMI(m.w, m.h);

    printf("Name: %s\n", m.name);
    printf("Age: %d\n", m.age);
    printf("Height: %.1lf\n", m.h);
    printf("Weight: %.1lf\n", m.w);
    printf("BMI %.1lf\n", BMI);
}

int main(int argc, char const *argv[])
{
    FILE *fp;
    Person man[MAX];

    if ((fp = fopen(FILE_NAME, "r")) == NULL)
    {
        printf("ファイルがオープンできません\n"); // エラーメッセージ
        exit(1);
    }else{
        printf("ファイルをオープンしました\n");
    }

    for (int i = 0; i < MAX; i++)
    {
        fscanf(fp, "%s %d %lf %lf", man[i].name, &man[i].age, &man[i].h, &man[i].w);
    }


    printf("\n1年が経ちました\n\n");

    for (int i = 0; i < MAX; i++)
    {
        aging(&man[i]);
        prtProf(man[i]);
    }

    fclose(fp);
    printf("ファイルをクローズしました\n")
    return 0;
}

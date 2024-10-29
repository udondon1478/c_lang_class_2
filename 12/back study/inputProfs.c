#include <stdio.h>
#include <string.h>
#define MAX (2)

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
    Person man[MAX];
    for (int i = 0; i < MAX; i++)
    {
        inProf(&man[i]);
    }

    printf("\n1年が経ちました\n\n");

    for (int i = 0; i < MAX; i++)
    {
        aging(&man[i]);
        prtProf(man[i]);
    }

    return 0;
}

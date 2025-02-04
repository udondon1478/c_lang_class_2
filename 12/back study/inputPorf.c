#include <stdio.h>
#include <string.h>

typedef struct _person
{
    char name[30];
    int age;
    double h, w;
} Person;

void inProf(Person *m){
    printf("Name: ");
    scanf("%s", &m->name);

    printf("Age: ");
    scanf("%d", &m->age);

    printf("Height: ");
    scanf("%lf", &m->h);

    printf("Weight: ");
    scanf("%lf", &m->w);
}

void aging(Person *m){
    m->age += 1;
}

double getBMI(double w, double h){
    double bmi;
    bmi = w/(h/100*h/100);
    return bmi;
}

void prtProf(Person m){
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
    Person man1 = {"Ito", 21, 175.5, 75.3};
    inProf(&man1);

    aging (&man1);
    printf("\n1年が経ちました\n\n");

    prtProf(man1);
    return 0;
}

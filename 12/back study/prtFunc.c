#include <stdio.h>

typedef struct _person
{
    char name[30];
    int age;
    double h, w;
} Person;

void prtProf(Person m){
    printf("Name: %s\n", m.name);
    printf("Age: %d\n", m.age);
    printf("Height: %.1lf\n", m.h);
    printf("Weight: %.1lf\n", m.w);
}

int main(int argc, char const *argv[])
{
    Person man1 = {"Ito", 21, 175.5, 75.3};

    prtProf(man1);
    return 0;
}

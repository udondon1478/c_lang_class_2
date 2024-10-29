#include <stdio.h>

typedef struct _person
{
    char name[30];
    int age;
    double h, w;
} Person;

int main(int argc, char const *argv[])
{
    Person man1 = {"Ito", 21, 175.5, 75.3};

    printf("Name: %s\n", man1.name);
    printf("Age: %d\n", man1.age);
    printf("Height: %.1lf\n", man1.h);
    printf("Weight: %.1lf\n", man1.w);
    return 0;
}

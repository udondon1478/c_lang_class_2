#include <stdio.h>
#define SMAX (5)
#define NMAX (10)
struct Student
{
    char name[NMAX];
    int grade;
    int number;
};

int main(int argc, char const *argv[])
{
    int i;
    struct Student std[SMAX] = {{"Tokui", 1, 2},
                                {"Arita", 3, 10},
                                {"Nagura", 2, 5},
                                {"Horiuchi", 4, 1},
                                {"Matsuko", 2, 20}};

    for (int i = 0; i < SMAX; i++)
    {
        printf("%s %d %d\n", std[i].name, std[i].grade, std[i].number);
    }

    return 0;
}

#include <stdio.h>

#define MAX (4)

typedef struct _rain
{
    int month;
    int milli;
} Rain;

void inData(Rain *m)
{
    scanf("%d %d", &m->month, &m->milli);
}

void prtData(Rain m)
{

    printf("%d月 %dmm\n", m.month, m.milli);
}

int main(int argc, char const *argv[])
{
    Rain data[MAX];

    for (int i = 0; i < MAX; i++)
    {
        inData(&data[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        prtData(data[i]);
    }

    return 0;
}
//12-22 完了
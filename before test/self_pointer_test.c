#include <stdio.h>
int main(int argc, char const *argv[])
{
    int values[10];
    int *p;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &values[i]);
    }
    

    p = &values[0]
    *p = 11;

    p = &values[9];
    *p = 12;

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", values[i]);
    }
    
    return 0;
}

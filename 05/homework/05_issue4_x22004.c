#include <stdio.h>
#include <string.h>
#define MAX (50)

int main(int argc, char const *argv[])
{
    char w[MAX], t[MAX];
    int i=0;

    scanf("%s", w);

    while (1)
    {
        scanf("%s", t);

        if (strcmp(t, "quit") == 0)
        {
            break;
        }
        else if(strcmp(w, t)==0)
        {
            i++;
        }
    }
    printf("%d\n", i);

    return 0;
}

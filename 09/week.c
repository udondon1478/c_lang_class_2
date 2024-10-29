#include <stdio.h>
int main(int argc, char const *argv[])
{
    int week;
    char *wname[]={"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};

    while (1){
        scanf("%d", &week);
        if (week == -1)
        {
            break;
        }
        if (0<=week && week<=6)
        {
            printf("%s\n", wname[week]);
        }else{
            printf("Nothing\n");
        }
    }
    return 0;
}

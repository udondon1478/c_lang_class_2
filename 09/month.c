#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month;
    char *mname[]={"Jan.","Feb.","Mar.","Apr.","May.","Jun.","Jul.","Aug.","Sep.","Oct.","Nov.","Dec."};
    while (1){
        scanf("%d", &month);
        if (month==0)
        {
            break;
        }
        if ((1<=month && month<=12))
        {
            printf("%s\n", mname[month-1]);
        }else{
            printf("Nothing\n");
        }
        
    }
    return 0;
}
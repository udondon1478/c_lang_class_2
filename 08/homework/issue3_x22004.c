#include <stdio.h>
#include <string.h>
#define NUM (4)
int main(int argc, const char *argv[])
{
    int n, flag=0;
    char str[100][NUM]
    for (int i = 0; i < ; i++)
    {
        scanf("%s", str[i]);
    }
    
    for (int i = 0; i < NUM; i++)
    {
        if (strcmp(str[i], "USO") == 0)
        {
            flag=1;
        }
        
    }
    
    if (flag==1)
    {
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}

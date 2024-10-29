#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int *p;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        p=&a[i];
        printf("%d", *p);
        if (i != n-1)
        {
            printf(" ");
        }else{
            printf("\n");
        }
        
    }
    
    return 0;
}

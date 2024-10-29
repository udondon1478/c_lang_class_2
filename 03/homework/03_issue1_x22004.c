#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[10], b[10], c[10];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if ((strcmp(a, b) == 0) && (strcmp(b, c) == 0) && a[0] == 'N')
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}

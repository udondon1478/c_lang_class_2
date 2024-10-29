#include <stdio.h>
#include <string.h>
#define MAX (50)

void reverse(const char a[MAX], const char b[MAX], char c[MAX * 2 + 1])
{
    char temp[MAX]="", temp2[MAX]="";
    int len1, len2, num=0;
    len1 = strlen(a);
    len2 = strlen(b);

    for (int i = len1-1; i >= 0; i--)
    {
        temp[num] = a[i];
        num++;
    }

    num=0;

    for (int i = len2-1; i >= 0; i--)
    {
        temp2[num] = b[i];
        num++;
    }

    strcat(temp, temp2);
    strcpy(c, temp);
}

int main(int argc, const char *argv[])
{
    char a[MAX + 1], b[MAX + 1], c[MAX * 2 + 1] = "";

    scanf("%s", a);
    scanf("%s", b);

    /* 連結 */
    reverse(a, b, c);

    /* 表示 */
    printf("%s\n", c);

    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX (20)

int main(int argc, char const *argv[])
{
    char w[MAX], t[MAX];

    scanf("%s", w);
    while (1){
        scanf("%s", t);
        if (strcmp(t, "quit")== 0)
        {
            printf("終了します\n");
            break;
        }
        if (strcmp(w, t)==0)
        {
            printf("文字列は一致します\n");
        }else {
            printf("文字列は一致しません\n");
        }
    }
    return 0;
}

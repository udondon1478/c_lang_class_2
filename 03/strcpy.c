#include <stdio.h>
#include <string.h>

#define MAX (20)

int main(int argc, const char * argv[]){
    char a[MAX+1], b[MAX+1];
    printf("文字列aを入力してください: ");
    scanf("%s", a);
    //文字列のコピー
    strcpy(b, a); //aをbにコピーする
    printf("文字列aは%sです\n", a);
    printf("文字列bは%sです\n", b);
    return 0;
}
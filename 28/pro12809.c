#include <stdio.h>

int main (void)
{
    char moji;

    //入力
    printf("アルファベットを入力＞＞");
    scanf("%c",&moji);

    if(moji == 'z'){
        printf("a");
    }else{
        printf("%c",moji + 1);
    }

    return 0;
}
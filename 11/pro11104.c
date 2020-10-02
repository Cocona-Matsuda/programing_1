#include <stdio.h>

int main (void)
{
    int x;

    printf("整数値を入力してください。");
    scanf("%d",&x);

    if(1 <= x & x <= 10){
        puts("正解です。");
    }else{
        puts("間違いです。");
    }

    return 0;
}
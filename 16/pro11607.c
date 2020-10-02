#include <stdio.h>

int main (void)
{
    int num;

    printf("数値を入力してください＞");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("偶数です。\n");
    }else{
        printf("奇数です。");
    }

    return 0;
}
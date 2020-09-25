#include <stdio.h>

int main (void)
{
    int num;

    printf("整数値を入力してください＞");
    scanf("%d",num);

    if(1 <= num && num <= 5){
        printf("OK\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
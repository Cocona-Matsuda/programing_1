#include <stdio.h>

int main (void)
{
    int x;

    //整数の入力
    printf("入力してください：");
    scanf("%d",&x);

    //奇数・偶数判定
    if(x % 2 == 0){
        printf("偶数です\n");
    }else{
        printf("奇数です\n");
    }

    return 0;
}
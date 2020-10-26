#include <stdio.h>

int main (void)
{
    int a,b;

    //整数の入力
    printf("整数を入力してください：");
    scanf("%d",&a);
    printf("整数を入力してください：");
    scanf("%d",&b);

    //絶対値の差を表示
    if(a < b){
        printf("絶対値の差：%d",b-a);
    }else{
        printf("絶対値の差：%d",a-b);
    }

    return 0;
}
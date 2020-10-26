#include <stdio.h>

int main (void)
{
    int a,b;

    //二回入力
    printf("実数を入力してください：");
    scanf("%d",&a);
    printf("実数を入力してください：");
    scanf("%d",&b);

    //合計を表示
    printf("合計：%d",a+b);

    return 0;
}
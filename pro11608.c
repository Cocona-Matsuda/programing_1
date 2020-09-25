#include <stdio.h>

int main (void)
{
    int num[2], var;

    printf("整数を入力してください（１回目）＞");
    scanf("%d",&num[0]);

    printf("整数を入力してください（2回目）＞");
    scanf("%d",&num[1]);

    var = num[0] - num[1];

    if(num[0] > num[1]){
        printf("２つの整数の差の絶対値は%dです。\n",var);
    }else{
        var *= -1;
        printf("２つの整数の差の絶対値は%dです。\n",var);
    }

    return 0;
}
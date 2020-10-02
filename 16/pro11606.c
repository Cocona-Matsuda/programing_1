#include <stdio.h>

int main (void)
{
    int num , one , ten , houndred;

    printf("数値（三桁）＞");
    scanf("%d",&num);

    one = num % 10;
    ten = num / 10 % 10;
    houndred = num / 100 % 10;

    printf("100の位 = %d\n",houndred);
    printf("10の位 = %d\n",ten);
    printf("1の位 = %d\n",one);

    return 0;
}
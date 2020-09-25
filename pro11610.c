#include <stdio.h>

int main (void)
{
    float a, b;

    printf("整数aを入力してください＞");
    scanf("%f",&a);

    printf("整数bを入力してください＞");
    scanf("%f",&b);

    if(b != 0){
        printf("%f / %f = %f\n",a ,b ,a/b);
    }else{
        printf("0で割ることは出来ません。\n");
    }

    return 0;
}
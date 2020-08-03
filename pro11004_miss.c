#include <stdio.h>
#include <math.h>

int main (void)
{
    int dif;
    float one,two;

    puts("整数を入力してください(一回目):");
    scanf("%g",&one);

    one = fabsf(one);

    puts("整数を入力してください(二回目):");
    scanf("%g",&two);

    two = fabsf(two);

    if(one > two){
        dif = one - two;
        printf("二つの数値の差は%dです。\n",dif);
    }else{
        dif = two - one;
        printf("二つの数値の差は%dです。\n",dif);
    }

    return 0;
}
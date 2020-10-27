#include <stdio.h>

int main (void)
{
    float m, kg, ave;

    //身長・体重を入力
    printf("身長(m)：");
    scanf("%g",&m);
    //標準体重を計算
    ave = m * m * 22;

    printf("体重(kg)：");
    scanf("%g",&kg);


    if (kg <= ave * 0.8){
        printf("痩せすぎです。\n");
    }else{
        puts("問題ありません。\n");
    }

    return 0;
}
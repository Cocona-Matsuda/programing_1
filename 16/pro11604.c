#include <stdio.h>

int main (void)
{
    float num[2], average;

    printf("数値１＞");
    scanf("%g",&num[0]);

    printf("数値２＞");
    scanf("%g",&num[1]);

    average = ( num[0] + num[1] ) / 2;

    printf("%gと%gの平均は%gです。", num[0], num[1], average);

    return 0;
}
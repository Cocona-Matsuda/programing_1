#include <stdio.h>

int main (void)
{
    float kg, m, bmi;

    printf("体重(kg)>>");
    scanf("%g",&kg);

    printf("身長(m)>>");
    scanf("%g",&m);

    bmi = kg / (m*m);

    printf("貴方のBMIは%5fです。",bmi);

    return 0;
}
#include <stdio.h>

int main (void)
{
    float kg, m, bmi;

    printf("体重(kg)を入力してください：");
    scanf("%f4",&kg);

    printf("身長(m)を入力してください：");
    scanf("%f4",&m);

    bmi = kg /( m * m);

    printf("貴方のBMI：%f3",bmi);

    return 0;
}
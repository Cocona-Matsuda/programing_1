#include <stdio.h>

int main (void)
{
    float kg, m, bmi;

    printf("�̏d(kg)>>");
    scanf("%g",&kg);

    printf("�g��(m)>>");
    scanf("%g",&m);

    bmi = kg / (m*m);

    printf("�M����BMI��%5f�ł��B",bmi);

    return 0;
}
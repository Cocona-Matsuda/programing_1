#include <stdio.h>

int main (void)
{
    float kg, m, bmi;

    printf("�̏d(kg)����͂��Ă��������F");
    scanf("%f4",&kg);

    printf("�g��(m)����͂��Ă��������F");
    scanf("%f4",&m);

    bmi = kg /( m * m);

    printf("�M����BMI�F%f3",bmi);

    return 0;
}
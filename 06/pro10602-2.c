#include <stdio.h>

int main (void)
{
    float kg, m, bmi;

    printf("‘Ìd(kg)>>");
    scanf("%g",&kg);

    printf("g’·(m)>>");
    scanf("%g",&m);

    bmi = kg / (m*m);

    printf("‹M•û‚ÌBMI‚Í%5f‚Å‚·B",bmi);

    return 0;
}
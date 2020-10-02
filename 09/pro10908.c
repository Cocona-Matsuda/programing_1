#include <stdio.h>

int main (void)
{
    float array[3],average;

    scanf("%g",&array[0]);
    scanf("%g",&array[1]);
    scanf("%g",&array[2]);

    average = (array[0] + array[1] + array[2]) /3;
    
    printf("平均値は%gです",average);

    return 0;
}
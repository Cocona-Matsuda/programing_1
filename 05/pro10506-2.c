#include <stdio.h>

int main (void)
{
    float r,menseki;

    printf("円の半径を入力してください：");
    scanf("%g",&r);

    menseki = r*r*3.14;

    printf("円の面積は%gです",menseki);

    return 0;
}
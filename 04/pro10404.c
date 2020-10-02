#include <stdio.h>

int main (void)
{
    float x,y;

    printf("xの値は：");
    scanf("%f",&x);

    printf("yの値は：");
    scanf("%f",&y);

    printf("xとyを辺とする長方形の面積は%f\n",x*y);

    return 0;
}
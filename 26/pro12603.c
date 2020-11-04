#include <stdio.h>

int main (void)
{
    int r;
    float pi = 3.14;

    puts("半径＞＞");
    scanf("%d",&r);

    printf("半径%dの円の面積は%gです。",r ,r * r * pi);

    return 0;
}
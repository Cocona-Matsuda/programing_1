#include <stdio.h>

int main (void)
{
    int x;

    printf("xの値を入力してください：");
    scanf("%d",&x);

    x = 2*x;

    printf("xの値は%dです。\n",x);

    return 0;
}
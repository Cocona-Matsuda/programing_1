#include <stdio.h>

int main (void)
{
    int x,y;

    printf("整数の値を入力してください:");
    scanf("%d%d",&x,&y);

    printf("長方形の面積は%dです\n",x*y);

    return 0;
}
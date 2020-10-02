#include <stdio.h>

int main (void)
{
    int under,hight,area;

    printf("底辺の長さを入力してください:");
    scanf("%d",&under);

    printf("高さを入力してください:");
    scanf("%d",&hight);    

    area = under * hight /2;

    printf("底辺が%d cmで高さが%d cmの三角形の面積は%d 平方cmです。",under,hight,area);

    return 0;
}
#include <stdio.h>

int main (void)
{
    int num[5], i, max, min;
    float ave = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("整数を入力してください（%d回目）：",i+1);
        scanf("%d",&num[i]);

        max = num[0];
        min = num[0];

        if (num[i] > max)
        {
            max = num[i];
        }

        if (num[i] < min)
        {
            min = num[i];
        }
        ave += num[i];
    }
    printf("入力終了！\n");

    ave /= 5;

    printf("最大値：%d\n",max);
    printf("最小値：%d\n",min);
    printf("平均値：%g\n",ave);

}
#include <stdio.h>

int main (void)
{
    int num[5], max = 0, min = 0, i = 0;
    float  ave;

    while(i < 5){
        printf("整数を入力してください>>");
        scanf("%d",&num[i]);
        if(max < num[i]){
            max = num[i];
        }
        if(min > num[i]){
            min = num[i];
        }
        ave += num[i];
        i++;
    }

    ave /= 5;

    printf("入力終了\n");
    printf("最大値：%d\n",max);
    printf("最小値：%d\n",min);
    printf("平均値：%g\n",ave);

    return 0;
}
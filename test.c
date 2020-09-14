#include <stdio.h>

int main (void)
{
    float all, score;

    printf("満点の点数を入力してください：");
    scanf("%g",&all);

    printf("自分の点数を入力してください：");
    scanf("%g",&score);

    if(score <= all * 0.4)
    {
        printf("頑張りましょう");
    }else if (score <= all * 0.7)
    {
        printf("良い");
    }else{
        printf("鬼");
    }
    return 0;
}
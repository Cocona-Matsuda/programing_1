#include <stdio.h>

int main (void)
{
    int sec[2], min;

    printf("秒＞");
    scanf("%d",&sec[0]);

    min = sec[0] / 60;
    sec[1] = sec[0] % 60;

    printf("%d秒は%D分%d秒です。",sec[0], min, sec[1]);

    return 0;
}
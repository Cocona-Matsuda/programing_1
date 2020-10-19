#include <stdio.h>

int main (void)
{
    int sum = 0, num = 1;

    while (num != 0)
    {
        printf("num>>");
        scanf("%d",&num);

        sum += num;
    }
    printf("合計：%d",sum);

    return 0;
}
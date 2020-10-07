#include <stdio.h>

int main (void)
{
    int input = 1, sum = 0, i = 1;

    while (input != 0)
    {
        printf("商品%d>>",i);
        scanf("%d",&input);
        i++;
        sum += input;
    }

    printf("支払金額は「%d円」です。\n",sum);
    return 0;
}
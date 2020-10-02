#include <stdio.h>

int main (void)
{
    int price, number;
    float cost, luck;

    printf("会計の金額を入力>>");
    scanf("%d",&price);

    printf("参加人数を入力>>");
    scanf("%d",&number);

    cost = price / number;
    luck = price % number;

    printf("一人「%g円です」\n",cost);
    printf("%g円足りないので誰か払ってください\n",luck);

    return 0;
}
#include <stdio.h>

int main (void)
{
    unsigned int price, number;
    double cost, luck;

    printf("会計の金額を入力してください：");
    scanf("%d",&price);

    printf("人数を入力してください：");
    scanf("%d",&number);

    cost = price / number ;
    luck = price % number ;

    printf("一人%g円支払ってください。\n",cost);
    printf("%g円不足してます。誰か支払ってください。\n",luck);

    return 0;
}
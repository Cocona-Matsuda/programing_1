#include <stdio.h>

int main (void)
{
    int price, number;
    float cost, luck;

    printf("��v�̋��z�����>>");
    scanf("%d",&price);

    printf("�Q���l�������>>");
    scanf("%d",&number);

    cost = price / number;
    luck = price % number;

    printf("��l�u%g�~�ł��v\n",cost);
    printf("%g�~����Ȃ��̂ŒN�������Ă�������\n",luck);

    return 0;
}
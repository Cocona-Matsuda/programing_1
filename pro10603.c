#include <stdio.h>

int main (void)
{
    unsigned int price, number;
    double cost, luck;

    printf("��v�̋��z����͂��Ă��������F");
    scanf("%d",&price);

    printf("�l������͂��Ă��������F");
    scanf("%d",&number);

    cost = price / number ;
    luck = price % number ;

    printf("��l%g�~�x�����Ă��������B\n",cost);
    printf("%g�~�s�����Ă܂��B�N���x�����Ă��������B\n",luck);

    return 0;
}
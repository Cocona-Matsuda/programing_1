#include <stdio.h>

int main (void)
{
    int suuji = 283;
    int futaketa;

    futaketa = (suuji/10)%10;

    printf("%d�̓񌅖ڂ̐�����%d�ł��B\n",suuji,futaketa);

    return 0;
}
#include <stdio.h>

int main (void)
{
    int suuji = 283;
    int futaketa;

    futaketa = (suuji/10)%10;

    printf("%dの二桁目の数字は%dです。\n",suuji,futaketa);

    return 0;
}
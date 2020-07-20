#include <stdio.h>

int main (void)
{
    int suuji = 283;
    int hitoketa;

    hitoketa = suuji % 10;

    printf("%dの一桁目の数字は%dです\n",suuji,hitoketa);

    return 0;
}
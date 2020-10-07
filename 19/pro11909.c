#include <stdio.h>

int main (void)
{
    int i;

    puts(" 日 月 火 水 木 金 土\n　　　　      1  2  3 ");

    for ( i = 4; i <= 31; i++)
    {
        printf("%3d",i);
        if (i % 7 == 3)
        {
            printf("\n");
        }

    }

    return 0;
}
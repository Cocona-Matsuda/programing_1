#include <stdio.h>

int main (void)
{
    int x = 0, i, count;

    printf("数字を入力してください>>");
    scanf("%d",&count);

    while (x < count)
    {
        for ( i = 0; i < x; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
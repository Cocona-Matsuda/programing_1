#include <stdio.h>

int main (void)
{
    int num, i, a;

    printf("整数値を入力してください>>");
    scanf("%d",&num);

    for ( i = 0; i <= num; i++)
    {
        for ( a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
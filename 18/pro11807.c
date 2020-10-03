#include <stdio.h>

int main (void)
{
    int x , y, i;

    printf("整数xを入力してください>>");
    scanf("%d",&x);

    printf("整数yを入力してください>>");
    scanf("%d",&y);

    for ( i = x; i < y; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}
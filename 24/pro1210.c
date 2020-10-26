#include <stdio.h>

int main (void)
{
    int x, i = 0;

    //xを入力
    printf("整数xを入力:");
    scanf("%d",&x);

    for ( i = 3; i <= x; i += 3)
    {
        printf("%d\n",i);
    }

    return 0;
}
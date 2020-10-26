#include <stdio.h>

int main (void)
{
    int x, i;

    //xを入力
    printf("x>>");
    scanf("%d",&x);

    for ( i = 1; i <= x; i++){
        printf("%d\n",i);
    }

    return 0;
}
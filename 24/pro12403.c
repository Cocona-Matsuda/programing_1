#include <stdio.h>

int main (void)
{
    int x, i;

    printf("x>>");
    scanf("%d",&x);

    for ( i = 0; i < x; i += 2)
    {
        printf("%d\n",i);
    }

    return 0;
}
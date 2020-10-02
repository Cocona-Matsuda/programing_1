#include <stdio.h>

int main (void)
{
    int y[2];
    int x = 3;

    y[0] = x;
    y[1] = x * x;

    printf("%d,%d",y[0],y[1]);

    return 0;
}
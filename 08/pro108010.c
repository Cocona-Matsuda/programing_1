#include <stdio.h>

int main (void)
{
    int i;
    int x[]= {0,1,2};
    int y;

    for ( i = 0; i < 3; i++)
    {
        /* code */
        y = x[i] * 2 + 3;

        printf("x=%d,y=%d\n",x[i],y);
    }
    

    return 0;
}
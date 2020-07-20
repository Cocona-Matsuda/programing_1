#include <stdio.h>

int main (void)
{
    int ten[4] = {95,80,70,100};
    float heikin;

    heikin = (ten[0] + ten[1] + ten[2] + ten[3]) / 4;

    printf("heikin = %g",heikin);

    return 0;
}
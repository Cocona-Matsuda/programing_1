#include <stdio.h>

int main (void)
{
    int a = 10;
    int b = 20;
    int copya = a;

    a = b;
    b = copya;

    printf("a=%d,b=%d",a,b);

    return 0;
}
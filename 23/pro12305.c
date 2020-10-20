#include <stdio.h>

int main (void)
{
    int n;

    while (n % 10 != 3)
    {
        printf("n>>");
        scanf("%d",&n);
    }

    return 0;
}
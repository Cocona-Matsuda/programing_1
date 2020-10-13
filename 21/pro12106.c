#include <stdio.h>

int main (void)
{
    int x;

    printf("x>>");
    scanf("%d",&x);

    x %= 3;
    switch (x)
    {
    case 0:
        printf("A組\n");
        break;
    case 1:
        printf("B組\n");
        break;
    default:
        printf("C組\n");
    }

    return 0;
}
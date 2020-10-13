#include <stdio.h>

int main (void)
{
    int x;

    printf("x>>");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        printf("xは1です。\n");
        break;
    case 5:
        printf("xは5です。\n");
    default:
        printf("xは1、5以外です。\n");
    }

    return 0;
}
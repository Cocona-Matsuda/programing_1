#include <stdio.h>

int main (void)
{
    int i;

    printf("整数を入力してください>>");
    scanf("%d",&i);

    for (i > 0; i--;)
    {
        printf("Hello\n");
    }

    return 0;
}
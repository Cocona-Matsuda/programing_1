#include <stdio.h>

int main (void)
{
    int n, i = 0, j = 0;

    //入力
    printf("n>>");
    scanf("%d",&n);

    while (i <= n)
    {
        j = 0;
        while (j < i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
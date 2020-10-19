#include <stdio.h>

int main (void)
{
    int n, i = 0;

    printf("n>>");
    scanf("%d",&n);

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}
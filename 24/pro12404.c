#include <stdio.h>

int main (void)
{
    int x, i = 1, j;

    printf("x>>");
    scanf("%d",&x);

    while (i <= x)
    {
        //jをリセット
        j = 1;
        while (j <= x)
        {
            printf("%d+%d=%d\n", i, j, i+j);
            j++;
        }
        //iを増加
        i++;
    }

    return 0;
}
#include <stdio.h>

int main (void)
{
    int x, i = 0, j = 0;

    //xを入力
    printf("xを入力してください：");
    scanf("%d",&x);

    while (i < x)
    {
        while (j < x)
        {
            printf("%d",x);
            j++;
        }
        printf("\n");
        i++;
        j = 0;
    }

    return 0;
}
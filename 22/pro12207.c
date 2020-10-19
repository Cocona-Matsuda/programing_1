#include <stdio.h>

int main (void)
{
    //入力する変数
    int n =2;

    //繰り返し処理
    while ((n % 10) != 1)
    {
        printf("入力：");
        scanf("%d",&n);
    }

    return 0;
}
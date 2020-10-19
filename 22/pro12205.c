#include <stdio.h>

int main (void)
{
    //反復演算子
    int i = 0;

    //入力用変数
    int n;

    //出入力
    printf("整数nを入力してください：");
    scanf("%d",&n);

    while (i < n)
    {
        if (i % 2 != 0)
        {
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}
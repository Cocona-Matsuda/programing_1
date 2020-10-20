<<<<<<< HEAD
#include <stdio.h>

int main (void)
{
    //変数nを宣言
    int n;

    //繰り返し用の変数
    int i;

    //出力＆入力
    printf("整数nを入力してください：");
    scanf("%d",&n);

    for ( i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
=======
#include <stdio.h>

int main (void)
{
    //変数nを宣言
    int n;

    //繰り返し用の変数
    int i;

    //出力＆入力
    printf("整数nを入力してください：");
    scanf("%d",&n);

    for ( i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
>>>>>>> d13d476949fd16fe48f9ca7e78f11f424af26eb1
}
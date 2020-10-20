<<<<<<< HEAD
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
=======
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
>>>>>>> d13d476949fd16fe48f9ca7e78f11f424af26eb1
}
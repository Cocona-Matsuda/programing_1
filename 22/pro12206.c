<<<<<<< HEAD
#include <stdio.h>

int main (void)
{
    //合計・入力の変数
    int sum = 0,num;

    //繰り返し入力
    while (num != 0)
    {
        printf("入力してください：");
        scanf("%d",&num);

        sum += num;
    }
    // num == 0 ならsumを出力
    printf("合計：%d円\n",sum);

    return 0;
=======
#include <stdio.h>

int main (void)
{
    //合計・入力の変数
    int sum = 0,num;

    //繰り返し入力
    while (num != 0)
    {
        printf("入力してください：");
        scanf("%d",&num);

        sum += num;
    }
    // num == 0 ならsumを出力
    printf("合計：%d円\n",sum);

    return 0;
>>>>>>> d13d476949fd16fe48f9ca7e78f11f424af26eb1
}
<<<<<<< HEAD
#include <stdio.h>

int main (void)
{
    //入力する変数
    int n, i;

    //入力
    printf("n>>");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        if (i % 2 == 1){
            //奇数番目の時の出力
            printf("+");
        }else{
            //偶数番目の時の出力
            printf("*");
        }
    }
    printf("\n");
    return 0;
=======
#include <stdio.h>

int main (void)
{
    //入力する変数
    int n, i;

    //入力
    printf("n>>");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        if (i % 2 == 1){
            //奇数番目の時の出力
            printf("+");
        }else{
            //偶数番目の時の出力
            printf("*");
        }
    }
    printf("\n");
    return 0;
>>>>>>> d13d476949fd16fe48f9ca7e78f11f424af26eb1
}
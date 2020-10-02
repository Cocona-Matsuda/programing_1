#include <stdio.h>

int main (void)
{
    int i = 0, n;
    int num, sum = 0;

    printf("整数ｎを入力してください>>");
    scanf("%d",&n);

    while(i < n){
        printf("整数>>");
        scanf("%d",&num);

        sum += num;
        i++;
    }

    printf("合計：%d\n",sum);

    return 0;
}
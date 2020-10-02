#include <stdio.h>

int main (void)
{
    int num;

    printf("数値を入力してください");
    scanf("%d",&num);

    if(num % 3 ==0){
        printf("数値%dは３の倍数です。\n",num);
    }else{
        printf("数値%dは３の倍数ではありません。\n",num);
    }

    return 0;
}
#include <stdio.h>

int main (void)
{
    int x;

    //お米の量を入力
    printf("購入量(kg)>>");
    scanf("%d",&x);

    if (100 < x){
        printf("￥%d\n", 300 * x + 3000);
    }else if (1 <= x && x <= 10){
        printf("￥%d\n",400 * x + 1500);
    }else{
        printf("￥%d\n", 500 * x + 1000);
    }
    return 0;
}
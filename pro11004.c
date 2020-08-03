#include <stdio.h>

int main (void)
{
    int one,two;

    puts("整数を入力してください(一回目)：");
    scanf("%d",&one);

    puts("整数を入力してください(二回目):");
    scanf("%d",&two);

    if(one > two){
        printf("二つの整数の差の絶対値は%d",one-two);        
    }else{
        printf("二つの整数の差の絶対値は%d",two-one);
    }    

    return 0;
}
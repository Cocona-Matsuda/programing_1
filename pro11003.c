#include <stdio.h>

int main (void)
{
    int x;

    puts("数を入力してください>>");
    scanf("%d",&x);

    if(x % 2 == 0){
        puts("偶数");
    }else{
        puts("奇数");
    }

    return 0;
}
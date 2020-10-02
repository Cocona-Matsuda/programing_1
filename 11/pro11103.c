#include <stdio.h>

int main (void)
{
    int a,b;

    printf("整数aを入力してください>>");
    scanf("%d",&a);

    printf("整数bを入力してください>>");
    scanf("%d",&b);
    
    if(a != b){
        if(a > b){
            printf("%dより%dのほうが大きい値です。",b,a);
        }else{
            printf("%dより%dのほうが大きい値です。",a,b);
        }
    }else{
        puts("二つの数値は同じ値です。");
    }
    return 0;
}
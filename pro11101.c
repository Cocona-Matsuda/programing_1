#include <stdio.h>

int main (void)
{
    int x;

    puts("数字を入力してください>>");
    scanf("%d",&x);

    if(x % 3 == 0){
        printf("%dは3の倍数です。",x);
    }else {
        printf("%dは3の倍数ではありません。",x);
    }
    
    return 0;
}
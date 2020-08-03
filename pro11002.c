#include <stdio.h>

int main (void)
{
    int x;
    puts("整数>>");
    scanf("%d",&x);
    if(x > 0){
        puts("正の数\n");
    }else if(x == 0){
        puts("0\n");
    }else{
        puts("負の数\n");
    }

    return 0;
}
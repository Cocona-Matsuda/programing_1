#include <stdio.h>

int main (void)
{
    int x;
    puts("整数>>");
    scanf("%d",&x);

    if(x > 0){
        puts("正の数\n");
    }else{
        puts("0または負の数\n");
    }

    return 0;
}
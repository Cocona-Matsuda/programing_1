#include <stdio.h>

int main (void)
{
    int n = 201;
    int minute,second;

    minute = n / 60;
    second = n % 60;    

    printf("%d秒は%d分%d秒です。",n,minute,second);
    
    return 0;
}
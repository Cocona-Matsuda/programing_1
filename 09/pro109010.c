#include <stdio.h>

int main (void)
{
    int minute,second,n;

    printf("分>>");
    scanf("%d",&minute);

    printf("秒>>");
    scanf("%d",&second);

    n = minute * 60 + second;
    
    printf("%d分%d秒は%d秒です。",minute,second,n);
    return 0;
}
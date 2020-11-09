#include <stdio.h>

int main (void)
{
    int x, y;

    //入力
    printf("x>>");
    scanf("%x",&x);

    printf("y>>");
    scanf("%x",&y);

    //出力
    printf("%x + %x = %x",x ,y ,x + y);

    return 0;
}
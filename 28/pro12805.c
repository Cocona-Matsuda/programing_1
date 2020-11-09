#include <stdio.h>

int main (void)
{
    int x;

    printf("10進数で入力してください：");
    scanf("%d",&x);
    printf("%d = %x (16)",x ,x );

    return 0;
}
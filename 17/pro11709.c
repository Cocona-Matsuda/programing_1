#include <stdio.h>

int main (void)
{
    int num, i = 0, a;

    printf("整数値を入力してください>>");
    scanf("%d",&num);

    while(i <= num){
        while(a < i){
            printf("*");
            a++;
        }
        printf("\n");
        i++;
        a = 0;
    }

    return 0;
}
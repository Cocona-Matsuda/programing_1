#include <stdio.h>

int main (void)
{
    int a, sum, m[10];

    while(a < 10){
        printf("m[%d]>>",a);
        scanf("%d",&m[a]);
        a++;
    }

    a = 0;
    sum = 0;

    while(a < 10){
        sum += m[a];
        a++;
    }

    printf("入力された値の合計：%d\n",sum);

    return 0;
}
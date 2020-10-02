#include <stdio.h>

int main (void)
{
    int num_1, num_2;
    int sum = 0;

    while(sum % 5 != 0){
        printf("整数１>>");
        scanf("%d",&num_1);

        printf("整数２>>");
        scanf("%d",&num_2);

        sum = num_1 + num_2;
    }

    printf("５の倍数になりました。終了します。\n");

    return 0;
}
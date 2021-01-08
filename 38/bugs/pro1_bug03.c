#include <stdio.h>

int main(void)
{
    int i;

    printf("整数=");
    scanf("%d", &i);

    //if ((i / 2) == 0){
    if ((i % 2) == 0){
        //printf("%dは偶数です\n");
        printf("%dは偶数です\n",i);
    }
    else {
        //printf("%dは奇数です\n");
        printf("%dは奇数です\n",i );
    }

    return (0);
}
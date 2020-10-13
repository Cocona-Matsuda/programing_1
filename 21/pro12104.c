#include <stdio.h>

int main (void)
{
    int score;

    while(1){
        printf("score>>");
        scanf("%d",&score);
        printf("%d\n",score);

        if(0 <= score && score <= 100){
            break;
        }
    }

    return 0;
}
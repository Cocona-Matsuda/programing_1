#include <stdio.h>

int main (void)
{
    int month;

    while(1){
        printf("month>>");
        scanf("%d",&month);
        printf("%d\n",month);

        if(1 <= month && month <=12){
            break;
        }
    }

    return 0;
}
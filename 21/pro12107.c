#include <stdio.h>

int main (void)
{
    int x;

    printf("x>>");
    scanf("%d",&x);

    x %= 3;

    if (x == 0){
        printf("A組\n");
    }else if (x == 1){
        printf("B組\n");
    }else{
        printf("C組\n");
    }

    return 0;
}
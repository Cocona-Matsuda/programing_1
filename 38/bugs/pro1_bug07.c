#include <stdio.h>

int main(void)
{
    int a;

    printf("点数=");
    scanf("%d", &a);

//    if (0 <= a <= 59)){
    if (0 <= a && a <= 59){
        printf("赤点です\n");
    }
    else {
        printf("合格です\n");
    }
    
    return (0);
}

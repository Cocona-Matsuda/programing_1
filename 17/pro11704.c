#include <stdio.h>

int main (void)
{
    int i = 0;
    int num = 10;

    while(i < 10){
        num = num - i;
        printf("%d\n",num);
        i++;
    }

    return 0;
}
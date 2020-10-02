#include <stdio.h>

int main (void)
{
    int x;

    x = 10;

    x++;
    printf("増分演算子：%d\n",x);

    x--;
    printf("減分演算子：%d\n",x);

    return 0;
}
#include <stdio.h>

int main (void)
{
    int doll;
    float yen;

    printf("何ドルですか＞");
    scanf("%d",&doll);

    yen = 105.45 * doll;

    printf("%dドルは%g円です。",doll,yen);
    return 0;
}
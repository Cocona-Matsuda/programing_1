#include <stdio.h>

int main (void)
{
    int a, b, c;

    //入力
    printf("ax^2 + bx + c = 0\n");

    printf("a>>");
    scanf("%d",&a);

    printf("b>>");
    scanf("%d",&b);

    printf("c>>");
    scanf("%d",&c);

    //判定
    if (b * b - 4 * a * c >= 0){
        printf("実数解を持ちます\n");
    }else{
        ("実数解がありません\n");
    }

    return 0;
}
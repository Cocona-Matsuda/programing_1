#include <stdio.h>

int main(void)
{
    int n;
    printf("１：「おはよう」と出力\n２：「こんにちは」と出力\n３：「こんばんは」と出力\n４：「さようなら」と出力\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("おはよう");
        break;
    case 2:
        printf("こんにちは");
        break;
    case 3:
        printf("こんばんは");
        break;
    default:
        printf("さようなら");
        break;
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int n;

    while (n != 4)
    {
        printf("----メニュー------------------\n");
        printf("１：「おはよう」と出力\n");
        printf("２：「こんにちは」と出力\n");
        printf("３：「こんばんは」と出力\n");
        printf("４：「さようなら」と出力\n");
        printf("----メニュー------------------\n\n");

        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("おはよう\n");
            break;
        case 2:
            printf("こんにちは\n");
            break;
        case 3:
            printf("こんばんは\n");
            break;
        default:
            printf("さようなら\n");
            break;
        }
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int number;

    printf("学籍番号>>");
    scanf("%d", &number);

    number %= 1000;
    number /= 100;

    switch (number)
    {
    case 11:
        printf("機械システム工学科\n");
        break;
    case 12:
        printf("情報通信システム工学科\n");
        break;
    case 13:
        printf("メディア情報工学科");
        break;
    default:
        printf("生物資源工学科\n");
    }

    return 0;
}
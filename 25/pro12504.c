#include <stdio.h>

int main (void)
{
    int n, yaku;

    //役職判定
    printf("１.平社員\n");
    printf("２.係長\n");
    printf("３.課長\n");
    printf("４.部長\n");
    printf("役職を選んでください：");
    scanf("%d",&yaku);

    //勤続年数
    printf("勤続年数>>");
    scanf("%d",&n);

    switch (yaku)
    {
    case 1:
        printf("%d\n",3000 * n + 100000);
        break;
    case 2:
        printf("%d\n",4000 * n + 120000);
        break;
    case 3:
        printf("%d",5000 * n + 150000);
        break;
    case 4:
        printf("%d",6000 * n + 200000);
        break;
    default:
        break;
    }

    return 0;
}
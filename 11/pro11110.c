#include <stdio.h>

int main (void)
{
    int wind,rain,none;

    //風速と降水量を入力
    printf("風速を入力してください：");
    scanf("%d",&wind);

    printf("降水量を入力してください：");
    scanf("%d",&rain);

    if (15 <= wind)
    {
        /* code */
        printf("強風注意報\n");
        none++;

    }else if (25 < wind)
    {
        /* code */
        printf("強風警報\n");
        none++;
    }

    if (40 <= rain)
    {
        /* code */
        printf("大雨注意報\n");
        none++;

    }else if (60 <= rain)
    {
        /* code */
        printf("大雨警報\n");
        none++;

    }
    
    if (none == 0)
    {
        /* code */
        printf("注意報・警報はありません。\n");

    }
    
    
        

    return 0;
}

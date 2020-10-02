#include <stdio.h>

int main (void)
{
    int month,day;

    printf("今日の日付（月）>>");
    scanf("%d",&month);


    printf("今日の日付（日）>>");
    scanf("%d",&day);

    printf("今日は「%d月%d日」ですね。\n",month,day);

    return 0;
}
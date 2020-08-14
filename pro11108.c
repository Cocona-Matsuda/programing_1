#include <stdio.h>

int main (void)
{
    int day, i;
    char date[7][64] ={"土", "日", "月", "火", "水", "木", "金",} ;

    printf("日にちを入力してください：");
    scanf("%d",&day);

    if(1 <= day && day <= 31){

        i = day % 7;

        printf("2021年8月%d日は%s曜日です。\n",day,date[i]);
    }else{
        printf("正しい値を入力してください。\n");
    };

    return 0;
}
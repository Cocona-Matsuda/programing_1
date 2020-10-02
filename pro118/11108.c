#include <stdio.h>

int main (void)
{
    int day, i;
    wchar_t date[] = "土日月火水木金";

    printf("日にちを入力してください：");
    scanf("%d",&day);

    printf("%s",date[0]);

    if(1 <= day && day <= 31){

        i = day % 7;

        printf("2021年8月%d日は%s曜日です。\n",day,date[i]);
    }else{
        printf("正しい値を入力してください。\n");
    };

    return 0;
}
#include <stdio.h>

int main (void)
{
    //入力用変数
    char c;
    //フォネティックコード指定用変数
    int i;
    //フォネティックコード記録用配列
    char phonetic[][256] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Unelse", "Victor", "Whiskey", "X-Ray", "Yankee", "Zulu"};

    printf("---フォネティックコード---\n");
    printf("アルファベット大文字１文字を入力してenterボタンをおしてください\n");
    scanf("%c",&c);

    i = c -'A';

    printf("%s",phonetic[i]);
    return 0;
}
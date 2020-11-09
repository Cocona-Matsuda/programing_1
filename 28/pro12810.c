#include <stdio.h>

int main (void)
{
    char moji;

    //入力
    printf("文字を入力してください＞＞");
    scanf("%c",&moji);

    if(moji < 97){
        printf("%c",moji + 32);
    }else if (moji > 90){
        printf("%c",moji - 32);
    }

    return 0;
}
#include <stdio.h>

int main (void)
{
    int year;

    printf("西暦を入力してください：");
    scanf("%d",&year);

    if (year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0)){
        printf("今年はうるう年です。");
    }else{
        printf("うるう年ではありません。");
    }

    return 0;
}
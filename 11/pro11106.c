#include <stdio.h>

int main (void)
{
    int year;

    printf("西暦を入力してください。");
    scanf("%d",&year);

    if(year % 4 == 0){
        puts("オリンピックがあります。");
    }else{
        puts("オリンピックはありません。");
    }
    
    return 0;
}
#include <stdio.h>

int main (void)
{
    int age;

    //年齢の入力
    printf("年齢>>");
    scanf("%d",&age);

    if (7 <= age && age <= 12){
        printf("小学生です。\n");
    }else{
        printf("小学生ではありません\n");
    }

    return 0;
}
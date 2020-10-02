#include <stdio.h>

int main (void)
{
    float bmi,h,w;

    printf("身長(m)>>");
    scanf("%f",&h);

    printf("体重(kg)>>");
    scanf("%f",&w);

    bmi = w / (h*h);

    if(bmi < 20){
        printf("あなたは痩せすぎです。\n");
    }else if(bmi < 24){
        printf("あなたは標準です。\n");
    }else if(bmi < 26.5){
        printf("貴方は太りすぎです。\n");
    }
    return 0;
}
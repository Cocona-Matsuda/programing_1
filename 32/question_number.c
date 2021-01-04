#include <stdio.h>

int main (void)
{
    int max_number;
    int min_number;
    int question_number;
    int answer;

    printf("４桁の数(1~999)を思い浮かべてください\n");

    max_number = 999;
    min_number = 1;

    while (max_number != min_number)
    {
        question_number = (max_number + min_number) / 2;
        printf("\n貴方が思い浮かべている数は%dより大きいですか？\n",question_number);
        printf("「はい」なら０を、「いいえ」なら１を入力してください：");
    }
    

    return 0;
}
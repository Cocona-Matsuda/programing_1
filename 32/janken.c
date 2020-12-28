#include <stdio.h>
#include <conio.h>

int main(void)
{
    char moji;

    moji = 'a';

    while (moji != '0'){
        moji = getch();

        switch (moji){
            case '1':
                printf("ぐう\n");
                break;
            case '2':
                printf("ちょき\n");
                break;
            case '3':
                printf("ぱあ\n");
                break;
            case '0':
                printf("終了\n");
                break;
            default:
                printf("0～3を入力しなさい。\n");
        }
    }

    return 0;
}

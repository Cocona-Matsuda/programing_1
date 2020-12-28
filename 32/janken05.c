#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void)
{
    char c, moji;
    int r, input;

    printf("乱数の種（奇数）>> ");
	scanf("%d", &r);

	c = '1';

	while (c != '0'){
		input = getch();

        printf("人間：");
        switch (input){
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
            exit (0);
        default:
            printf("0～3を入力しなさい。\n");
        }

        r = (r * 12869 + 6925) % 32768;
        moji = (r % 3)+1;

        printf("コンピュータ：");
        switch (moji){
            case 1:
                printf("ぐう\n");
                break;
            case 2:
                printf("ちょき\n");
                break;
            case 3:
                printf("ぱあ\n");
                break;
        }
	}

    return 0;
}
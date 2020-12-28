#include <stdio.h>

int main (void)
{
    char c, moji;
    int r;

    printf("乱数の種（奇数）>> ");
	scanf("%d", &r);

	c = '1';

	while (c != '0'){
		c = getch();
		//乱数の生成
		r = (r * 12869 + 6925) % 32768;

        moji = (r % 3)+1;
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

    return 0;
}
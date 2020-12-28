#include <stdio.h>

int main (void)
{
    char c;
    int r;

    printf("乱数の種（奇数）>> ");
	scanf("%d", &r);

	c = '1';

	while (c != '0'){
		c = getch();
		//乱数の生成
		r = (r * 12869 + 6925) % 32768;
		printf("%d\n", (r % 3)+1);
	}

    return 0;
}
#include <stdio.h>

int main(void)
{
    int num;

    printf("１から１０までの整数=");
	scanf("%d", &num);

//    if (num < 1 && num > 10){
    if (num < 1 || num > 10){
		printf("間違いです\n");
    }
	else {
		printf("正解です\n");
	}

	return (0);
}

#include <stdio.h>

int main(void)
{
    int year;

    printf("西暦=");
	scanf("%d", &year);

//    if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0)){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("ことしはうるう年です\n");
    }
	else {
        printf("ことしはうるう年ではありません\n");
	}

    return (0);
}
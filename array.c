#include <stdio.h>

int main (void)
{
    int month = 0;
    int last[] = {30,29,31,30,31,30,31,31,30,31,30,31};
    int i;

    do{
        printf("何月ですか：");
        scanf("%d",&month);

    }while(month <=1 || month >=12);

    i = month - 1;
    printf("%d",last[i]);

    return 0;
}
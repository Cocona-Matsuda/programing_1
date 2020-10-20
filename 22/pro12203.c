<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
    int x, i, j;
    printf("大きさ=");
    scanf("%d", &x);
    for (i = 1; i <= x; i++){
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
=======
#include <stdio.h>

int main(void)
{
    int x, i, j;
    printf("大きさ=");
    scanf("%d", &x);
    for (i = 1; i <= x; i++){
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
>>>>>>> d13d476949fd16fe48f9ca7e78f11f424af26eb1
}
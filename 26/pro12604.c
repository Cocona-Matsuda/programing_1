#include <stdio.h>

int main(void)
{
    int n, i, flag = 0;

    //入力
    printf("n>>");
    scanf("%d", &n);

    //割って確かめる
    for (i = 2; i < n; i++){
        if (n % i == 0){
            flag++;
            break;
        }
    }

    if (0 < flag){
        printf("%dは素数ではありません。\n", n);
    }
    else{
        printf("%dは素数です。\n", n);
    }

    return 0;
}
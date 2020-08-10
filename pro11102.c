#include <stdio.h>

int main (void)
{
    float a,b;

    printf("実数aを入力してください>>");
    scanf("%f",&a);

    printf("実数bを入力してください>>");
    scanf("%f",&b);

    if(b != 0){
        printf("%f / %f = %f",a,b,a/b);
    }else{
        printf("0で割ることはできません\n");
    }
    
    return 0;
}
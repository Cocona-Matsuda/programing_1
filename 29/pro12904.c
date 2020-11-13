#include <stdio.h>

int main (void)
{
    char moji;

    moji = getch();

    if (moji == "a"){
        printf("A");
    }else if (moji == "b"){
        printf("B");
    }else if (moji == "c"){
        printf("C");
    }else{
        printf("X");
    }

    return 0;
}
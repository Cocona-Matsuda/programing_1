#include <stdio.h>
#include <conio.h>

int main (void)
{
    char moji;

    moji = getch();

    if(moji == 'z'){
        printf("a");
    }else{
        printf("%c",moji + 1);
    }

    return 0;
}
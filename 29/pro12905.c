#include <stdio.h>
#include <conio.h>

int main (void)
{
    char moji;

    moji = getch();

    if (moji < 97){
        printf("大文字");
    }
    else if (moji > 90){
        printf("小文字");
    }

    return 0;
}
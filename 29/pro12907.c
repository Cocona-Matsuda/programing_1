#include <stdio.h>
#include <conio.h>

int main (void)
{
    char moji;

    moji = getch();

    if (moji < 97){
        printf("%c", moji + 32);
    }
    else if (moji > 90){
        printf("%c", moji - 32);
    }

    return 0;
}
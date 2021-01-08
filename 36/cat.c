#include<stdio.h>
#include<conio.h>

int main (void){
    int x = 25, y = 10, dx = 1, dy = 1, i, j;

    while (1)
    {
        gotoxy(x,y);
        printf("            ");
        gotoxy(x,y + 1);
        printf("             ");
        gotoxy(x,y + 2);
        printf("             ");

        if (x == 50){
            dx = -1;
        }else if (x == 1){
            dx = 1;
        }
        x += dx;

        if (y == 20){
            dy = -1;
        }else if (y == 1){
            dy = 1;
        }
        y += dy;

        gotoxy(x,y);
        printf("O_O");
        gotoxy(x,y + 1);
        printf(" o");
        gotoxy(x,y + 2);
        printf(" 0");
        gotoxy(x,y + 3);
        printf(" O");
        gotoxy(x,y + 4);
        printf(" ●");

        for ( i = 0; i < 1000; i++){
            for ( j = 0; j < 100000; j++);
        }
    }
    return 0;
}


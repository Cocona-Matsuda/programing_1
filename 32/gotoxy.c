#include<stdio.h>
#include<conio.h>

int main(void){
    int x, y, i = 0;
    char c;

    x = 25;
    y = 10;

    gotoxy(x,y);
    printf("o");

    gotoxy(40,5);
    printf("*");

    while (i == 0){
        if (kbhit != 0){

            gotoxy(x,y);
            printf(" ");

            c = getch();

            switch (i == 0){
                case 'w':
                    printf("^");
                    if (y > 1){
                        y--;
                    }else{
                        y = 20;
                    }
                    break;

                case 's':
                    printf("v");
                    if (y < 20){
                        y++;
                    }else{
                        y = 1;
                    }
                    break;

                case 'a':
                    printf("<");
                    if (x > 1){
                        x--;
                    }else{
                        x = 50;
                    }
                    break;

                case 'd':
                    printf(">");
                    if (x < 24){
                        x++;
                    }else{
                        x = 1;
                    }
                    break;

                case 0:
                    i++;
                    break;
            }
            gotoxy(x,y);
            printf("o");
            if (x == 40 && y ==5){
                i++;
            }
        }

    }
    return 0;
}
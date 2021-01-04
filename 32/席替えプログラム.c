#include <stdio.h>
#include <conio.h>

int main (void){
    int student_no, seat_no; //出席番号・座席番号
    int seat[1000]; //座席数
    int i;
    int key_hit;
    int nop; //クラスの人数

    printf("クラスの人数＞＞");
    scanf("%d",&nop);

    for(i = 0; i < nop; i++){
        //クラスの人数に合わせて座席数を確保
        seat[i] = 0;
    }

    seat_no = 0;

    for(student_no = 1; student_no <= nop; student_no++){
        printf("出席番号：%d\n",student_no);

        key_hit = 0;

        while(key_hit == 0){
            if(seat[seat_no] == 0){
                printf("座席番号：%2d\r",seat_no + 1);
                if(kbhit() != 0){
                    getch();
                    printf("\n\n");

                    seat[seat_no] = student_no;
                    key_hit = 1;
                }
            }

            seat_no++;

            if(seat_no >= nop){
                seat_no = 0;
            }
        }
    }
    for(seat_no = 0; seat_no < nop; seat_no++){
        printf("席番号：%2d ==> 出席番号：%d\n",seat_no + 1, seat[seat_no]);
    }

    return 0;
}
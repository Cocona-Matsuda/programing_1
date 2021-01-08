#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int random(void);
int choice(void);

int main (void)
{
    /*自分のステータス HP , ATK , DEF の順*/
    int status[3] = { 50, 25, 0};

    char name[8];
    printf("名前を入力してください：");
    scanf("%s",&name);


    while(1){
        /* enemy 召喚  HP , ATK , DEF の順*/
        int enemy[3] = {10, 20, 0};

        choice();

        /* DEF値をランダムで決定 */
        enemy[2] = random();

        /*エネミーに攻撃*/
        int attack = status[1] - enemy[2];
        enemy[0] -= attack;
        Sleep (1000);
        printf("エネミーに%dダメージを与えた！\n",attack);

        if(enemy[0] <= 0){
            Sleep (1000);
            printf("エネミーを倒した！\n");
            break;
        }


        status[2] = random();

        /* エネミーから攻撃 */
        attack = enemy[1] - status[2];
        status[0] -= attack;
        Sleep (500);
        printf("%sは%dダメージを受けた!\n",name,attack);

        if (status[0] <= 0)
        {
            /* 死んだら強制終了 */
            Sleep (1000);
            printf("%sは死んでしまった。\n",name);
            exit(0);
        }
    }

    return 0;
}

int choice(void)
{
    printf("エネミーが現れた！\n");
    Sleep (500);

    /*攻撃するかの選択*/
    char input;

    printf("戦いますか？(y/n):");
    scanf("%s",&input);

    switch (input){
    case 'y':
        Sleep(500);
        printf("エネミーにアタック！\n");
        return 0;
        break;

    case 'n':
        Sleep(500);
        printf("逃げ出した。");
        exit(0);

    default:
        Sleep(500);
        printf("戦いますか？(y/n):");
        scanf("%s", &input);
    }
}

int random(void){
    srand((unsigned int)time(NULL));
    return 10 + rand() % 11 ;
}


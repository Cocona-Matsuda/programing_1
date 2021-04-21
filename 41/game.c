#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ESC 0x1B

int random(void);
int choice(void);

int main(void)
{
    /*自分のステータス HP , ATK , DEF の順*/
    int status[3] = {50, 25, 0};

    /* enemy 召喚  HP , ATK , DEF の順*/
    int enemy[3] = {10, 20, 0};

    //画面をクリアにする
    printf("%c[2J", ESC);
    printf("%c[15F", ESC);

    //名前入力
    char name[8];
    printf("%c[11E", ESC);
    printf("名前を入力してください。");
    printf("%c[5F", ESC);
    scanf("%s", &name);
    printf("HP [ ########## ]");
    printf("%c[7F", ESC);
    Sleep(1000);

    while (1)
    {

        choice();

        /* DEF値をランダムで決定 */
        enemy[2] = random();

        /*エネミーに攻撃*/
        int attack = status[1] - enemy[2];
        enemy[0] -= attack;
        Sleep(1000);

        /*　書けんｗ
        for ( life = 0; life <= enemy[0]; life++){
            printf("#")
        }
        */
        printf("%c[12E",ESC);
        printf("エネミーに%dダメージを与えた！", attack);
        printf("%c[12E",ESC);

        if (enemy[0] <= 0){
            Sleep(1000);
            printf("%c[13E",ESC);
            printf("エネミーを倒した！");
            printf("%c[13F",ESC);
            break;
        }else{
            //コメントのとこを掃除
            printf("%c[11E%c[K",ESC,ESC);
            printf("%c[E%c[K%c[12F",ESC,ESC,ESC);
        }

        status[2] = random();

        /* エネミーから攻撃 */
        attack = enemy[1] - status[2];
        status[0] -= attack;
        Sleep(500);

        /*　書けんｗ
        for ( life = 0; life <= enemy[0]; life++){
            printf("#")
        }
        */
        printf("%c[11E",ESC);
        printf("%sは%dダメージを受けた!", name, attack);
        printf("%c[K%c[11F",ESC,ESC);

        if (status[0] <= 0){
            /* 死んだら強制終了 */
            Sleep(1000);
            printf("%c[11E",ESC);
            printf("%sは死んでしまった。\n", name);
            exit(0);
        }
    }

    return 0;
}

int choice(void)
{
    //敵出現
    printf("%c[11E%c[K", ESC, ESC);
    printf("エネミーが現れた！");
    printf("%c[11F", ESC);
    printf("Enemy%c[G",ESC);
    Sleep(1000);

    /*攻撃するかの選択*/
    char input;
    printf("%c[12E", ESC);
    printf("戦いますか？(y/n):");
    scanf("%s", &input);

    printf("%c[2F%c[K", ESC, ESC);
    printf("%c[E%c[K", ESC, ESC);
    printf("%c[12F", ESC);

    switch (input)
    {
    case 'y':
        Sleep(500);

        printf("%c[2E", ESC);
        printf("HP [ ########## ]");
        printf("%c[9E", ESC);
        printf("エネミーにアタック！");
        printf("%c[11F",ESC);
        return 0;
        break;

    case 'n':
        Sleep(500);
        printf("%c[11E", ESC);
        printf("逃げ出した。");
        exit(0);

    default:
        Sleep(500);
        printf("%c[11E", ESC);
        printf("戦いますか？(y/n):");
        scanf("%s", &input);
        printf("%c[12F", ESC);
    }
}

int random(void)
{
    srand((unsigned int)time(NULL));
    return 10 + rand() % 11;
}

/*
今更ながらターミナル三分割して
それぞれ表示用に関数用意したほうが良い気がしてきたけど
間に合わんのでメモだけ。。。
*/
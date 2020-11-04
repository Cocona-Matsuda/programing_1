#include <stdio.h>
#include <stdlib.h>

/*この2行はファイルの入出力を行うための文です。今回は無視してください。*/
int filein(float m[]);
void fileout(float m[], int n);

int main(void)
{
	float btemp[365];
	int i;
	int n;
	n = filein(btemp); /*ファイルからデータの読み込み*/

/*
	ここから
*/
    int flag;

    printf("メニュー：\n");
    printf("1.入力\n2.表示\n");
    scanf("%d",&flag);

    if (flag == 1){
        printf("体温＞＞");
        scanf("%g",&btemp[n]);
    }else{
        for (i = 0; i < n; i++){
            printf("%.2f\n", btemp[i]);
        }
    }

/*
	ここまでを作成する。
*/

	fileout(btemp, n); /*終了前にファイルへ書き込み*/

	return (0);
}


/*
	以下のプログラムはファイルの入出力を行うためのものです。
	今回は無視して結構です。
*/
int filein(float m[])
{
	FILE *fp;
	int n = 0;

	fp = fopen("BodyTemp.csv", "r");
	if (fp != NULL){
		while (fscanf(fp, "%f", &m[n]) != EOF){
			n++;
		}

		fclose(fp);
	}

	return (n);
}

void fileout(float m[], int n)
{
	FILE *fp;
	int i;
	fp = fopen("BodyTemp.csv", "w");

	for (i = 0; i < n; i++){
		fprintf(fp, "%f\n", m[i]);
	}

	fclose(fp);
}

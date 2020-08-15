#include <stdio.h>

int main (void)
{
    //入力用関数
    int month,day;

    //処理用の変数
    int i;

    //誕生日を取得
    printf("誕生月を入力してください:");
    scanf("%d",&month);

    printf("誕生日を入力してください:");
    scanf("%d",&day);

    //誕生日を数字列に直す
    i = (month * 100) + day;

    //よくある条件分岐
    if (i <= 119 || 1222 <= i && i < 1232)
    {
        printf("山羊座");

    }else if (i < 219){
        
        printf("みずがめ座");
    
    }else if (i < 321){
    
        printf("うお座");
    
    }else if (i < 420){
    
        printf("おひつじ座");
    
    }else if (i < 521){
    
        printf("おうし座");
    
    }else if (i < 622){
    
        printf("ふたご座");
    
    }else if (i < 723){
    
        printf("かに座");
    
    }else if (i < 823){
    
        printf("しし座");
    
    }else if (i < 923){
    
        printf("おとめ座");
    
    }else if (i < 1024){
    
        printf("てんびん座");
    
    }else if (i < 1122){
    
        printf("さそり座");
    
    }else if (i < 1222){
    
        printf("いて座");
    
    }else {
    
        printf("やぎ座");
    
    }
    
    return 0;
}
#include <stdio.h>

int main (void)
{
    int i, count;
    char name[10];

    printf("名前を入力してください:");
    scanf("%s",name);

    printf("表示回数>>");
    scanf("%d",&count);

    for ( i = 0; i < count; i++)
    {
        printf("%s\n",name);
    }

    return 0;
}
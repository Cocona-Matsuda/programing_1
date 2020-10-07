#include <stdio.h>

int main (void)
{
    int count = 0, i;
    char name[10];

    printf("名前は何ですか？>>");
    scanf("%s",name);

    printf("表示回数>>>");
    scanf("%d",&i);

    while (count < i)
    {
        printf("%s\n",name);
        count++;
    }

    return 0;
}

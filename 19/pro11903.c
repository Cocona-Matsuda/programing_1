#include <stdio.h>

int main (void)
{
    int i;
    char name[10];

    printf("名前を入力してください:");
    scanf("%s",name);

    for ( i = 0; i < 5; i++)
    {
        printf("%s\n",name);
    }

    return 0;
}
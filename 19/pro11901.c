#include <stdio.h>

int main (void)
{
    int i = 0;
    char name[10];

    printf("名前は何ですか？>>");
    scanf("%s",name);

    while (i < 6)
    {
        printf("%s\n",name);
        i++;
    }

    return 0;
}

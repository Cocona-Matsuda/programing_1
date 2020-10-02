#include <stdio.h>

int main (void)
{
    int i;

    int x = 3;
    int y[] = {x,x*x};

    for(i=0;i<3;++i){
        printf("%d\n",y[i]);
    }
    
    return 0;
}
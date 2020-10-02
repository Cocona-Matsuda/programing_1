#include <stdio.h>

int main (void)
{   
    int m[3];
    int i ;

    while( i=0; i<4; i++){

        /* code */
        printf("m[%d]>>",i);
        scanf("%d",&m[i]);
        
        if( i < 4){
            break;
        }
    }
    
    printf("%d\n",m[0]);
    printf("%d\n",m[1]);
    printf("%d\n",m[2]);

    return 0;
}
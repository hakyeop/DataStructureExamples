#include <stdio.h>

void main(){
    int i=0,n;
    int multiply[9];

    printf("\nType any int(1~9) : ");

    while(1){
        scanf("%d", &n);
        if(n<1 || n>9)
            printf("\n Type any int(1~9) : ");
        else
            break;
    }
    
    printf("\n");
    for(i=0; i<9; i++){
        multiply[i] = n * (i+1);
        printf(" %d * %d = %d \n", n, (i+1), multiply[i]);
    }

    getchar(); getchar();
}

#include <stdio.h>

void main(){
    int i, length = 0;
    char str[50];
    printf("\nEnter string : ");
    gets(str);
    printf("\nEnterd string is \n \"");
    for(i=0; str[i]; i++){
        printf("%c",str[i]);
        length+=1;
    }
    printf("\"");
    printf("\n\nEnterd string's length = %d \n", length);

    getchar();
}

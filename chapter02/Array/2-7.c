#include <stdio.h>

void main(){
    int i,j,k;
    char student[2][3][20];
    for(i=0;i<2;i++){
        printf("\n student %d's name : ", i+1);
        gets(student[i][0]);
        printf("\n student %d's major : ", i+1);
        gets(student[i][1]);
        printf("\n student %d's student number : ", i+1);
        gets(student[i][2]);
    }

    for(i=0; i<2; i++){
        printf("\n\n student %d", i+1);
        for(int j=0; j<3; j++){
            printf("\n\t");
            for(k=0;student[i][j][k] != '\0'; k++){
                printf("%c", student[i][j][k]);
            }
        }
    }
    getchar();
}

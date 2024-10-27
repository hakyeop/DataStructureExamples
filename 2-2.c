#include <stdio.h>

void main(){
    int i;
    int score[3]={91,86,97};
    char grade[3]={'A','B','A'};

    printf("\n *** Credits acquired by grade ***\n\n");

    for(i=0; i<3; i++){
        printf("%3d grade : score = %d, credit = %c\n", i+1, score[i], grade[i]);
    }
}

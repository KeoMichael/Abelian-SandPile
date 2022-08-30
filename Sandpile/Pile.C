#include <stdio.h>

int main(){

    createPile();

    int infinity = 0;
    int i, j;

    while(infinity == 0){
        for(i = 0; i < 23; i++){
            for(j = 0; j < 23; j++){
                printf("%d", sandpile[i][j]);
                }
            printf();
        }
        printf();
    }

    return 0;
    
}

void createPile(){
    int sandpile[23][23];

    int i, j;

    for(i = 0; i < 23; i++){
        for(j = 0; j < 23; j++){
            sandpile[i][j] = 0
        }
    }
}
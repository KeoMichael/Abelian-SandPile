#include <stdio.h>

int main(){

    int infinity = 0;
    int i, j;


    //Creation of sandpile
    int sandpile[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            sandpile[i][j] = 0;
        }
    }


    //Printing sandpile
    while(infinity < 1){

        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                printf("%d", sandpile[i][j]);
            }
            printf("\n");
        }
        printf("_______________________\n\n");

        //Adding sand to the pile
        sandpile[2][2]++;

        if(sandpile[2][2] > 9){

            //Loop to check all areas of sand
            for(i = 0; i < 5; i++){
                for(j = 0; j < 5; j++){

                    //sandpile[i][j] = 4;

                    //Disperses towers of sand
                    if(sandpile[i][j] > 9){
                        for(i = -1; i < 2; i++){
                            for(j = -1; j < 2; j++){
                                if(sandpile[2+i][2+j] < 10){
                                    sandpile[2+i][2+j]++;
                                }
                                else{
                                    sandpile[2+i][2+j] = 0;
                                }
                            }
                        }
                    }


            }
        }

            sandpile[2][2] = 0;
        }


        infinity++;
    }

    return 0;
    
}

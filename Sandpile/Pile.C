#include <stdio.h>

int x, y, i, j;

int topple(int sandpile[7][7], int x, int y, int i, int j){

        for(x = 0; x < 7; x++){
            for(y = 0; y < 7; y++){
                printf("%d", sandpile[x][y]);
            }
            printf("\n");
        }
        printf("_______________________\n\n");

        //Adding sand to the pile
        sandpile[3][3]++;


        if(sandpile[3][3] > 8){
            //Loop to check all areas of sand
            for(x = 0; x < 7; x++){
                for(y = 0; y < 7; y++){

                    //toppling towers of sand
                    if(sandpile[x][y] > 8){
                        
                        for(i = -1; i < 2; i++){
                            for(j = -1; j < 2; j++){
                                if(sandpile[x+i][y+j] < 8){
                                    sandpile[x+i][y+j]++;
                                }
                                else{
                                    sandpile[x+i][y+j] = 0;
                                }
                            }
                        }
                    }


                }
            }
        }

    return topple(int sandpile[7][7], int x, int y, int i, int j);

}

int main(){

    //Creation of sandpile
    int sandpile[7][7];

    for(x = 0; x < 7; x++){
        for(y = 0; y < 7; y++){
            sandpile[x][y] = 0;
        }
    }

    topple(sandpile, x, y, i, j);
    

    return 0;
    
}



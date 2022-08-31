public class tryPile {

    public static void main(String[] args) {

        int[][] sandpile = new int[23][23];

        //Fill Pile
        for(int i = 0; i < 23; i++){
            for(int j = 0; j < 23; j++){
                sandpile[i][j] = 0;
            }
        }

        //Infinite while loop
        int infinity = 0;
        while(infinity == 0){

            if(sandpile[11][11] < 10){
                sandpile[11][11]++;
            }
            else{

                for(int i = -1; i < 2; i++){
                    for(int j = -1; j < 2; j++){
                        if(sandpile[11+i][11+j] < 10){
                            sandpile[11+i][11+j]++;
                        }
                        else{
                            sandpile[11+i][11+j] = 0;
                        }
                    }
                }

                sandpile[11][11] = 0;
        
            }








            //Print pile
            for(int i = 0; i < 23; i++){
                for(int j = 0; j < 23; j++){
                    System.out.print(sandpile[i][j]);
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}
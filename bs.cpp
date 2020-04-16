#include <stdlib.h>
#include <iostream>
#include <ctime>

int main(){
    const int arrSize = 10;
    const int shipNum = 5;
    int rand1, rand2 = 0;
    int grid[arrSize][arrSize];
    unsigned seed = time(0);
   
    /* init array */
    for(int i = 0; i < arrSize ; i++){
        for(int j = 0; j < arrSize ; j++){
            grid[i][j] = 0;
        } 
    }

    srand(seed);
    /* add ships */
    for(int i = 0 ; i < shipNum ; i++){
        rand1 = rand() % arrSize; 
        rand2 = rand() % arrSize;
        if( grid[rand1][rand2] != 1 ){
            grid[rand1][rand2] = 1;
        } else {
            i--;
        }
    }

    for(int i = 0; i < arrSize ; i++){
        for(int j = 0; j < arrSize ; j++){
            std::cout << grid[i][j] << " ";
        } 
        std::cout << "\n";
    }

}
#define RAND_MAX 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char table[9][9];//chiffre = itoa(rand());
    int i, j;//, k = rand();
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            table[i][j] = '0';
            printf("%c  ", table[i][j]);
            if(j == 8){ 
                printf("\n");
            }
        }
    }
    // for(k=0;k<30;k++){
    //     table[k][k] = chiffre;
    //     for(j = 0; j < 9; j++){
    //         table[i][j] = '0';
    //         printf("%c", table[i][j]);
    //         if(j == 8){
    //             printf("\n");
    //         }
    //     }
        
    // }
    return 0;
}
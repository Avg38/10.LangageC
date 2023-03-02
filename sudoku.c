#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char table[9][9];
    int i, j, k;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            table[i][j] = '0' + rand() % 9 + 1;
            printf("%c ", table[i][j]);

            // Design
            if(j == 8){ 
                printf("\n");
            }
            if(j == 2 | j == 5){ 
                printf(" ");
            }
            if(i == 2 & j == 8 | i == 5 & j == 8){ 
                printf("\n");
            }
        }
    }

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            for(k=0;k<9;k++){
                
            }
        }
    }

    return 0;
}
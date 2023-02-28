#include <stdio.h>
#include <stdlib.h>

int main(){
    int nb1, nb2, nb3, nb;

    printf("Choisisez un nombre: ");
    scanf("%d", &nb1);

    printf("Choisisez un nombre de fin: ");
    scanf("%d", &nb3);
    nb2 = nb1;
    printf("%d, %d", nb1, nb2);

    printf(", ");

    nb = nb1 + nb2;
    while (nb <= nb3){
        printf("%d, ", nb);
        nb1 = nb2;
        nb2 = nb;
        nb = nb1 + nb2;
    }
    printf("\n La valeur max atteinte est: \n");
    printf("%d", nb2);    
    return 0;
}

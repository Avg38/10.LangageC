#include <stdio.h>

int main() {
    int nb;

    printf("Entrez un nombre: ");
    scanf("%d", &nb);

    if (nb == 2){
        printf("La valeur est un nombre premier.\n");
    } else if (nb % 2 == 0) {
        printf("La valeur n'est pas un nombre premier.\n");
    } else if (nb % 3 == 0){
        printf("La valeur n'est pas un nombre premier.\n");
    } else{
        printf("La valeur est un nombre premier.\n");
    }
    

    return 0;
}
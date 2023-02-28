#include <stdio.h>

int main() {
    int nb;

    printf("Entrez un nombre: ");
    scanf("%d", &nb);

    if (nb % 3 == 0) {
        printf("La valeur est un multiple de 3.\n");
    } else {
        printf("La valeur n'est pas un multiple de 3.\n");
    }
    return 0;
}
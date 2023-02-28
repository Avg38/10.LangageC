#include <stdio.h>

int main() {
    int nb;

    printf("Entrez un nombre: ");
    scanf("%d", &nb);

    printf("\nLa valeur choisie est : %d\n", nb);

    if (nb % 2 == 0) {
        printf("La valeur est paire.\n");
    } else {
        printf("La valeur est impaire.\n");
    }
    return 0;
}
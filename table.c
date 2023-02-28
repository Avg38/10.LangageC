#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma execution_character_set("utf-8");
int main(){
    char titre[100];
    int quantite, i;
    float prixUnitaire, prixMultiple, ttc;
    char reponse = 1;

    while (reponse == 1){
        printf("Veuillez entrer un titre: ");
        scanf("%s", &titre);
        printf("Veuillez entrer la quantité: ");
        scanf("%d", &quantite);
        printf("Veuillez entrer le prix unitaire: ");
        scanf("%f", &prixUnitaire);
        
        prixUnitaire = round(prixUnitaire);
        prixMultiple = prixUnitaire * quantite;
        ttc = (prixUnitaire * quantite * 24 + prixUnitaire);
        printf("Titre: ");
        for (i = 0; i != '\0'; i++){
            printf("%c", titre[i]);
        }
        printf("Quantite: %d \n", quantite);
        printf("Prix unitaire: %f \n", prixUnitaire);
        printf("Prix total HT: %f \n", prixMultiple);
        printf("Prix total TTC: %f \n", ttc);

        printf("Voulez-vous continuer? (oui = 1/non = 0)");
        scanf("%d", &reponse);
    }
    return 0;
}

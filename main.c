#include <stdio.h>
#include <stdlib.h>
#include "defines.h"


void afficheMenu(){

    printf("1. Ajouter un joueur\n");
    printf("2. Supprimer un joueur\n");
    printf("3. Afficher les joueurs\n");
    printf("4. Rechercher un joueur\n");
    printf("5. Organiser un match\n");
    printf("6. Enregistrer un résultat\n");
    printf("7. Afficher le classement\n");
    printf("8. Afficher les statistiques\n");
    printf("9. Sauvegarder les données\n");
    printf("10. Charger les données\n");
    printf("11. Simuler un tournoi\n");
    printf("0. Quitter\n");
    printf(" \n");
}

void choixMenu(int c){

    switch (c)
    {
    case 0 : printf("vous avez quitter\n"); break;
    case 1 : printf("OK\n"); break;
    case 2 : printf("OK\n"); break;
    case 3 : printf("OK\n"); break;
    case 4 : printf("OK\n"); break;
    case 5 : printf("OK\n"); break;
    case 6 : printf("OK\n"); break;
    case 7 : printf("OK\n"); break;
    case 8 : printf("OK\n"); break;
    case 9 : printf("OK\n"); break;
    default: printf("Commande inconnue\n"); return;
    }

}

int main(){

    int c=-1;
    while(c!=0){  
        printf("\n");
        afficheMenu();
        printf("Votre choix : ");
        if (scanf("%d", &c) != 1) {
            printf("Saisie invalide !\n");
            return 1;
        }
        choixMenu(c);
    }
    
    return 0;
    
}

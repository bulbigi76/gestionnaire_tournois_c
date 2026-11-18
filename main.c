#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "defines.h"

void ajouteJoueur(void);


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
    case 1 : ajouteJoueur(); break;
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

void ajouteJoueur(){
    joueur_t new_joueur;
    char n[51];
    char p[51]; 
    int a;
    printf("Saisir le nom : ");
    scanf("%50s", n);

    printf("Saisir le prénom : ");
    scanf("%50s", p);

    printf("Saisir l'âge : ");
    scanf("%d", &a);

    strcpy(new_joueur.nom, n);
    strcpy(new_joueur.prenom, p);
    new_joueur.age = a;


    printf("Nom : %s, prénom : %s, âge : %d\n",
           new_joueur.nom,
           new_joueur.prenom,
           new_joueur.age);

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

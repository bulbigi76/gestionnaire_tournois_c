#include <stdlib.h>
#include <stdio.h>
#include "defines.h"

void afficheMenu(int c){

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

    int c=10;
    while(c!=0){
        scanf("%d",&c);
        afficheMenu(c);
    }
    
    
}

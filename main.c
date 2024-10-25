#include <stdio.h>
#include "functions.h"
#define taille 100

int main() {
    int tbl[taille] = { 0 };
    int n;

    do {
        printf("Saisir le nombre d'entier que vous voulez insérer dans le tableau : \n");
        scanf("%d", &n);
    } while (n > 100);

    remplir(tbl, n);

    int nombre = afficher(tbl);
    printf("Le plus grand nombre est %d.", nombre);
}
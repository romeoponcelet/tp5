#include "functions.h"
#include <stdio.h>

void remplir(int tbl[taille], int n) {
    int a;

    for (int i = 0; i < n; i++) {
        printf("Saisir l'entier #%d : \n", i + 1);
        scanf("%d", &a);
        tbl[i] = a;
    }
}

int afficher(int tbl[taille], int n) {
    int maximum = tbl[0];

    for (int i = 0; i < n; i++) {
        if (tbl[i] > maximum) {
            maximum = tbl[i];
        }
    }

    return maximum;
}
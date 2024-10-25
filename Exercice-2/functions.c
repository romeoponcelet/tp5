#include "functions.h"
#include <stdio.h>

void remplir(int tbl[tailleTbl1][tailleTbl2]) {

    int n;

    for (int i = 0; i < tailleTbl1; i++) {
        for (int j = 0; j < tailleTbl2; j++) {
            printf("Saisir l'entier (%d; %d) que vous souhaitez ajouter : \n", i + 1, j + 1);
            scanf("%d", &n);
            tbl[i][j] = n;
        }
    }
}

void transformer(int tbl1[tailleTbl1][tailleTbl2], int tbl2[tailleTbl3]) {
    int a = 0;

    for (int i = 0; i < tailleTbl1; i++) {
        for (int j = 0; j < tailleTbl2; j++) {
            tbl2[a] = tbl1[i][j];
            a++;
        }
    }
}

void afficher(int tbl[tailleTbl3]) {
    for (int i = 0; i < tailleTbl3; i++) {
        printf("%d, ", tbl[i]);
    }
}
#include <stdio.h>
#include "functions.h"

int main() {

    int tbl_2d[tailleTbl1][tailleTbl2], tbl_1d[tailleTbl3];

    remplir(tbl_2d);
    transformer(tbl_2d, tbl_1d);
    afficher(tbl_1d);
}
#include <stdio.h>

int main(void)
{
    int compteur = 5;
    int ligne = 1;

    if (compteur <= 0 || compteur >= 10) {
        printf("compteur doit etre compris entre 1 et 9.\n");
        return 1;
    }

    while (ligne <= compteur) {
        int colonne = 1;

        while (colonne <= ligne) {
            if (colonne == 1 || colonne == ligne || ligne == compteur) {
                printf("*");
            } else {
                printf("#");
            }

            if (colonne < ligne) {
                printf(" ");
            }

            colonne++;
        }

        printf("\n");
        ligne++;
    }

    return 0;
}
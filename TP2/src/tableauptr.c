#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int taille = 11;
    int entiers[11];
    float reels[11];

    int *p_entiers = entiers;
    float *p_reels = reels;

    srand(time(NULL));

    /* Remplissage des tableaux avec des valeurs aleatoires. */
    for (int i = 0; i < taille; i++) {
        *(p_entiers + i) = rand() % 101;
        *(p_reels + i) = (rand() % 1001) / 100.0f;
    }

    printf("Tableau d'entiers avant la multiplication :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d%s", *(p_entiers + i),
               i < taille - 1 ? ", " : "\n");
    }

    printf("\nTableau de floats avant la multiplication :\n");
    for (int i = 0; i < taille; i++) {
        printf("%.2f%s", *(p_reels + i),
               i < taille - 1 ? ", " : "\n");
    }

    /* Modification des elements dont l'indice est divisible par 2. */
    for (int i = 0; i < taille; i++) {
        if (i % 2 == 0) {
            *(p_entiers + i) *= 3;
            *(p_reels + i) *= 3;
        }
    }

    printf("\nTableau d'entiers apres la multiplication :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d%s", *(p_entiers + i),
               i < taille - 1 ? ", " : "\n");
    }

    printf("\nTableau de floats apres la multiplication :\n");
    for (int i = 0; i < taille; i++) {
        printf("%.2f%s", *(p_reels + i),
               i < taille - 1 ? ", " : "\n");
    }

    return 0;
}
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};

    for (int i = 0; i < 5; i++) {
        int nombre = nombres[i];
        int bits[sizeof(int) * CHAR_BIT];
        int taille = 0;

        /* Les restes donnent les chiffres binaires dans l'ordre inverse. */
        for (int valeur = nombre; valeur > 0; valeur /= 2) {
            bits[taille] = valeur % 2;
            taille++;
        }

        printf("%d en binaire : ", nombre);

        if (taille == 0) {
            printf("0");
        } else {
            for (int j = taille - 1; j >= 0; j--) {
                printf("%d", bits[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
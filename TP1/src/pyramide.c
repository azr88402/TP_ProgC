#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) {
        /* Espaces pour centrer la ligne. */
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        /* Nombres croissants. */
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        /* Nombres decroissants. */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\nGeneration de la pyramide terminee.\n");

    return 0;
}

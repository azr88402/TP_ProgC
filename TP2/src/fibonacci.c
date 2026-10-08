#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long precedent = 0;
    unsigned long long courant = 1;

    printf("Entrez le nombre de termes (1 a 94) : ");

    if (scanf("%d", &n) != 1 || n < 1 || n > 94) {
        printf("Valeur invalide.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        unsigned long long terme;

        if (i == 0) {
            terme = 0;
        } else if (i == 1) {
            terme = 1;
        } else {
            terme = precedent + courant;
            precedent = courant;
            courant = terme;
        }

        printf("%llu", terme);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
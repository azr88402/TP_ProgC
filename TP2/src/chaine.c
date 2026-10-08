#include <stdio.h>

int main(void)
{
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[sizeof(chaine1)];
    char concatenation[sizeof(chaine1) + sizeof(chaine2) - 1];

    int longueur1 = 0;
    int longueur2 = 0;
    int i, j;

    /* Calcul des longueurs, sans compter '\0'. */
    while (chaine1[longueur1] != '\0') {
        longueur1++;
    }

    while (chaine2[longueur2] != '\0') {
        longueur2++;
    }

    /* Copie de la premiere chaine. */
    for (i = 0; chaine1[i] != '\0'; i++) {
        copie[i] = chaine1[i];
    }
    copie[i] = '\0';

    /* Copie de la premiere chaine dans le resultat. */
    for (i = 0; chaine1[i] != '\0'; i++) {
        concatenation[i] = chaine1[i];
    }

    /* Ajout de la deuxieme chaine a la suite. */
    for (j = 0; chaine2[j] != '\0'; j++) {
        concatenation[i] = chaine2[j];
        i++;
    }
    concatenation[i] = '\0';

    printf("Longueur de la premiere chaine : %d\n", longueur1);
    printf("Longueur de la deuxieme chaine : %d\n", longueur2);
    printf("Longueur totale : %d\n", longueur1 + longueur2);
    printf("Copie : %s\n", copie);
    printf("Concatenation : %s\n", concatenation);

    return 0;
}
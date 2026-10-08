#include <stdio.h>
#include <string.h>

int main(void)
{
    struct Etudiant {
        char nom[50];
        char prenom[50];
        char adresse[100];
        float note_programmation;
        float note_systeme;
    };

    struct Etudiant etudiants[5];
    char texte[100];

    /* Saisie des informations des cinq etudiants. */
    for (int i = 0; i < 5; i++) {
        printf("\nEtudiant %d\n", i + 1);

        printf("Nom : ");
        if (scanf(" %49[^\n]", texte) != 1) {
            return 1;
        }
        strcpy(etudiants[i].nom, texte);

        printf("Prenom : ");
        if (scanf(" %49[^\n]", texte) != 1) {
            return 1;
        }
        strcpy(etudiants[i].prenom, texte);

        printf("Adresse : ");
        if (scanf(" %99[^\n]", texte) != 1) {
            return 1;
        }
        strcpy(etudiants[i].adresse, texte);

        printf("Note en Programmation en C : ");
        if (scanf("%f", &etudiants[i].note_programmation) != 1) {
            printf("Note invalide.\n");
            return 1;
        }

        printf("Note en Systeme d'exploitation : ");
        if (scanf("%f", &etudiants[i].note_systeme) != 1) {
            printf("Note invalide.\n");
            return 1;
        }
    }

    /* Affichage apres la saisie de tous les etudiants. */
    printf("\n--- Liste des etudiants ---\n");

    for (int i = 0; i < 5; i++) {
        printf("\nEtudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note en Programmation en C : %.2f/20\n",
               etudiants[i].note_programmation);
        printf("Note en Systeme d'exploitation : %.2f/20\n",
               etudiants[i].note_systeme);
    }

    return 0;
}
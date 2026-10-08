#include <stdio.h>

int main(void)
{
    /* Pour chaque etudiant : nom, puis prenom. */
    char noms_prenoms[5][2][50] = {
        {"Dupont", "Alice"},
        {"Martin", "Lucas"},
        {"Bernard", "Emma"},
        {"Petit", "Hugo"},
        {"Robert", "Lea"}
    };

    char adresses[5][100] = {
        "12 rue des Fleurs, Paris",
        "8 avenue Victor Hugo, Lyon",
        "25 rue de la Paix, Lille",
        "3 boulevard Gambetta, Bordeaux",
        "17 rue Pasteur, Nantes"
    };

    float notes_programmation[5] = {15.5f, 12.0f, 17.0f, 14.5f, 16.0f};
    float notes_systeme[5] = {14.0f, 13.5f, 16.5f, 11.0f, 18.0f};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms_prenoms[i][0]);
        printf("Prenom : %s\n", noms_prenoms[i][1]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C : %.2f/20\n",
               notes_programmation[i]);
        printf("Note en Systeme d'exploitation : %.2f/20\n",
               notes_systeme[i]);
        printf("\n");
    }

    return 0;
}
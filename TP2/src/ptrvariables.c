#include <stdio.h>

int main(void)
{
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;
    signed short s = -1000;
    unsigned short us = 2000;
    signed int i = -10000;
    unsigned int ui = 20000U;
    signed long int l = -100000L;
    unsigned long int ul = 200000UL;
    signed long long int ll = -10000000000LL;
    unsigned long long int ull = 20000000000ULL;
    float f = 2.0f;
    double d = 3.5;
    long double ld = 4.5L;

    /* Pointeurs vers les variables. */
    char *pc = &c;
    signed char *psc = &sc;
    unsigned char *puc = &uc;
    signed short *ps = &s;
    unsigned short *pus = &us;
    signed int *pi = &i;
    unsigned int *pui = &ui;
    signed long int *pl = &l;
    unsigned long int *pul = &ul;
    signed long long int *pll = &ll;
    unsigned long long int *pull = &ull;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    const char *noms[] = {
        "char", "signed char", "unsigned char",
        "signed short", "unsigned short",
        "signed int", "unsigned int",
        "signed long int", "unsigned long int",
        "signed long long int", "unsigned long long int",
        "float", "double", "long double"
    };

    void *adresses[] = {
        pc, psc, puc, ps, pus, pi, pui,
        pl, pul, pll, pull, pf, pd, pld
    };

    size_t tailles[] = {
        sizeof(c), sizeof(sc), sizeof(uc),
        sizeof(s), sizeof(us), sizeof(i), sizeof(ui),
        sizeof(l), sizeof(ul), sizeof(ll), sizeof(ull),
        sizeof(f), sizeof(d), sizeof(ld)
    };

    for (int etape = 0; etape < 2; etape++) {
        if (etape == 0) {
            printf("Avant la manipulation :\n");
        } else {
            /* Modification des valeurs via les pointeurs. */
            *pc = 'B';
            *psc = -20;
            *puc = 100;
            *ps = -2000;
            *pus = 3000;
            *pi = -10001;
            *pui = 30000U;
            *pl = -200000L;
            *pul = 300000UL;
            *pll = -20000000000LL;
            *pull = 30000000000ULL;
            *pf = 1.0f;
            *pd = 7.0;
            *pld = 9.0L;

            printf("\nApres la manipulation :\n");
        }

        for (int k = 0; k < 14; k++) {
            /* unsigned char permet de lire les octets d'une variable. */
            const unsigned char *octets = adresses[k];

            printf("%s : adresse = %p, valeur = ",
                   noms[k], adresses[k]);

            for (size_t j = tailles[k]; j > 0; j--) {
                printf("%02x", (unsigned int)octets[j - 1]);
            }

            printf("\n");
        }
    }

    return 0;
}
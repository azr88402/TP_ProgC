#include <stdio.h>

int main(void)
{
    char caractere = 'A';
    signed char caractere_signe = -10;
    unsigned char caractere_non_signe = 200;

    signed short entier_court = -1000;
    unsigned short entier_court_non_signe = 2000;

    signed int entier = -10000;
    unsigned int entier_non_signe = 20000U;

    signed long int entier_long = -100000L;
    unsigned long int entier_long_non_signe = 200000UL;

    signed long long int entier_tres_long = -10000000000LL;
    unsigned long long int entier_tres_long_non_signe = 20000000000ULL;

    float reel = 3.14f;
    double reel_double = 3.141592653589793;
    long double reel_long = 3.141592653589793238L;

    printf("char : %c\n", caractere);
    printf("signed char : %hhd\n", caractere_signe);
    printf("unsigned char : %hhu\n", caractere_non_signe);

    printf("signed short : %hd\n", entier_court);
    printf("unsigned short : %hu\n", entier_court_non_signe);

    printf("signed int : %d\n", entier);
    printf("unsigned int : %u\n", entier_non_signe);

    printf("signed long int : %ld\n", entier_long);
    printf("unsigned long int : %lu\n", entier_long_non_signe);

    printf("signed long long int : %lld\n", entier_tres_long);
    printf("unsigned long long int : %llu\n", entier_tres_long_non_signe);

    printf("float : %.2f\n", reel);
    printf("double : %.15f\n", reel_double);
    printf("long double : %.18Lf\n", reel_long);

    return 0;
}
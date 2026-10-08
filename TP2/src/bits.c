#include <stdio.h>
#include <limits.h>

int main(void)
{
    int d = 268439552; /* 0x10001000 : les deux bits sont a 1 sur 32 bits. */
    int nombre_bits = sizeof(unsigned int) * CHAR_BIT;

    if (nombre_bits < 20) {
        printf("Le type int doit avoir au moins 20 bits.\n");
        return 1;
    }

    unsigned int valeur = (unsigned int)d;

    unsigned int bit4 = (valeur >> (nombre_bits - 4)) & 1U;
    unsigned int bit20 = (valeur >> (nombre_bits - 20)) & 1U;

    printf("%d\n", bit4 == 1U && bit20 == 1U);

    return 0;
}
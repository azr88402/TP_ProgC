#include <stdio.h>

int main(void)
{
    struct Couleur {
        unsigned char rouge;
        unsigned char vert;
        unsigned char bleu;
        unsigned char alpha;
    };

    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0xff, 0xff, 0xff, 0x80},
        {0x00, 0x00, 0x00, 0x00}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %hhu\n", couleurs[i].rouge);
        printf("Vert : %hhu\n", couleurs[i].vert);
        printf("Bleu : %hhu\n", couleurs[i].bleu);
        printf("Alpha : %hhu\n", couleurs[i].alpha);
        printf("\n");
    }

    return 0;
}
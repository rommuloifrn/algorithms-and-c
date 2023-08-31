#include <stdio.h>

int main() {
    unsigned int rgb;
    unsigned char r, g, b, alfa;
    scanf("%u", &rgb);
    printf("0xRGB = %08X\n", rgb);

    /* Realizar conversões para as variáveis r, g, b e alfa */
    r = (rgb>>24);
    //alfa = (rgb<<24>>24);
    g = (rgb>>16);
    b = (rgb>>8);
    alfa = (rgb);
    printf("R = %u (%02X)\n", r, r);

    printf("G = %u (%02X)\n", g, g);

    printf("B = %u (%02X)\n", b, b);

    printf("alfa = %u (%02X)\n", alfa, alfa);



    return 0;
}
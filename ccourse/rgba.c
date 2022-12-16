#include <stdio.h>

int main(){
    unsigned char r, g, b, alfa;
    unsigned int rgb;

    scanf("%hhu %hhu %hhu %hhu", &r, &g, &b, &alfa);
    rgb = alfa;
    rgb += (b<<8);
    rgb += (g<<16);
    rgb += (r<<24);
    /* %08X printa hexadecimal (letras em maiúsculo, definido pelo X) com 8 de largura e preenche os espaços com 0*/
    printf("RGB = %u \n", rgb);
    printf("RGB = %08X \n", rgb);

    return 0;
}
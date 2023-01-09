#include <stdio.h>
#include <stdlib.h>

int main() {
    int *n;
    int q; // Multiplicador da quantidade de memória
    n = (int*) malloc( sizeof(int) *q );

    // abaixo diferentes tipos de acesso a variável n:

    // o acesso a n sem parênteses só funciona para o index 0.
    *n = 25;
    n[1] = 23;
    *(n+2) = 24;
    

    printf("%d\n", n[0]);
    printf("%d\n", n[1]);
    printf("%d\n", *(n+2));
    printf("%d\n", *n+3);

    return 0;
}
#include <stdio.h>
#include "aula19funcs.h"

// Ponteiros: Prática

void print_vector(int a[], int tamanho) {
    printf("{ ");
    int i;
    for ( i=0; i<tamanho; i++)
        printf("%d ", a[i]);
    printf("}, largura: %d\n", tamanho);
}

int main() {
    int capacidade = 3, tamanho = 0, a[capacidade]; 
    int i;


    for (i=0; i<capacidade; i++) {
        append_int(a, &tamanho, capacidade, i*3);
    }

    print_vector(a, tamanho);


    return 0;
}
#include <stdio.h>
#include "aula19funcs.h"

// Ponteiros: Prática

void print_vector(int *a, int tamanho) {
    printf("{ ");
    int i;
    for ( i=0; i<tamanho; i++)
        printf("%d ", *(a+i));
    printf("}, largura: %d\n", tamanho);
}

int main() {
    int capacidade = 5, tamanho = 0, a[capacidade]; 
    int i, erro;


    for (i=0; i<10; i++) {
        append_int(a, &tamanho, capacidade, i*3, &erro);
        if (erro){
            printf("erro de memória!\n");
            break;
        }
    }

    print_vector(a, tamanho);


    return 0;
}
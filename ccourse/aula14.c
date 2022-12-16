#include <stdio.h>

int maiorElemento(int a[], int tamanho) {
    int maior = a[0];
    int i;
    for (i=1; i<tamanho; i++) {
        if ( a[i] > maior ) {
            maior = a[i];
        }
    }
    return maior;
}

int indiceDoMaiorElemento(int a[], int tamanho) {
    int indice = 0;
    int i;
    for (i=1; i<tamanho; i++) {
        if ( a[i] > indice ) {
            indice = i;
        }
    }
    return indice;
}

void trocaElementos(int a[], int i1, int i2) {
    int aux = a[i1];
    a[i1] = a[i2];
    a[i2] = aux;
}

int main(){
    int i, tamanho;
    scanf("%d", &tamanho);
    int a[tamanho];
    for (i = 0; i<tamanho; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i<tamanho; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("O maior elemento eh %d no indice %d\n", maiorElemento(a, tamanho), indiceDoMaiorElemento(a, tamanho));
    trocaElementos(a, 1, 2);

    printf("depois da troca: ");
    for (i = 0; i<tamanho; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
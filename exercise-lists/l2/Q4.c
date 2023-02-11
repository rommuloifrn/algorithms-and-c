#include <stdio.h>

void zero(int *x) {
    int i;
    for(i=0; i<1000000; i++){
        x[i] = 0;
    }
}

void runthrough(int x[], int limite) {
    int i;
    printf("> 0 a %d: { ", limite-1);
    for(i=0; i<limite; i++) {
        printf("%d ", x[i]);
    }
    printf("}\n\n");
}
// Função que confere a primeira ocasião de números repetidos em um array, ignorando os zeros.
// recebe o array a ser conferido e um array só com zeros.
void there_rep(int a[], int b[], int capacidade) {
    int i, x;
    // para cada elemento
    for(i=0; i<capacidade; i++){
        // somente se o elemento em a[] não for zero
        if (a[i] != 0) {
            // marque ocasião em b[]
            b[a[i]]++;
        }
        // caso haja mais de uma ocasião no marcador, retorne
        if (b[a[i]] > 1) {
            printf("Há um número repetido: é o %d\n", a[i]);
            return;
        }

    }
    printf("Não há elementos repetidos\n");
    return;
}

int main() {
    int i;

    int a[1000000] = {24, 279, 3, 5, 7, 19, 34, 19, 20, 19, 32, 32};
    int b[1000000];

    zero(b);

    there_rep(a, b, 1000000 );
    runthrough(a, 100);
    runthrough(b, 100);
    

    return 0;
}
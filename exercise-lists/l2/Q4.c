#include <stdio.h>

void there_rep(int a[], int b[], int capacidade) {
    int i;
    for(i=0; i<capacidade; i++){
        b[a[i]]++;
        if (b[a[i]] > 1)
            printf("tem um número repetido, e é o %d", b[a[i]]);
            break;
    }
    printf("Não há nenhum número repetido.");
}

int main() {
    int i;

    int a[1000000] = {1, 2, 3, 5, 7, 28, 34, 19, 20, 19, 32, 32};
    int b[1000000];

    // função pra zerar o b[0]
    for(i=0; i<1000000; i++){
        b[i] = 0;
    }
    there_rep(a, b, 1000000 );
    

    return 0;
}
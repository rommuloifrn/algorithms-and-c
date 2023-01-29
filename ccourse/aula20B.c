#include <stdio.h>

void print_vector(int a[], int tamanho) {
    printf("{ ");
    int i;
    for ( i=0; i<tamanho; i++)
        printf("%d ", a[i]);
    printf("}, largura: %d\n", tamanho);
}

int main() {


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Alocação dinâmica

void print_vector(int a[], int tamanho) {
    printf("{ ");
    int i;
    for ( i=0; i<tamanho; i++)
        printf("%d (index %d), ", a[i], i);
    printf("}, largura: %d\n", tamanho);
}

// nao entendi como funfa o limite dum array criado por malloc.
// entendi como funfa. eh que eu tava declarando o p1[0] com *p1 = 10; e nao tava vendo. brab

/* estrutura da malloc():
 * pointer = (cast_type *) malloc (bytes); 
 * pointer = (cast_type *) malloc (byte_size * amount); 
 * pointer = (cast_type *) malloc (sizeof() * amount);
 * malloc() retorna um ponteiro para uma área de memória (void *), NULL se não houver
 * memória suficiente.
 *
 * free(pointer)
*/


int main() {
    int * p1;
    int x, i;
    scanf("%d", &x);
    if (p1==0) {
        printf("erro ao alocar memória");
        exit(1);
    }
    p1 = (int *) malloc(sizeof(int)*x);
    for (i=0; i<x; i++)
        scanf("%d", p1+i);
    print_vector(p1, x);
    free(p1);

    return 0;
}
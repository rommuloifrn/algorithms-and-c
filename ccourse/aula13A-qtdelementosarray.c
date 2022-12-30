#include <stdio.h>

int main(){

    int i, size;
    scanf("%d", &size);
    int a[size];

    // Escreve cada elemento em a[]
    for (i=0; i<size; i++) {
        printf("%d ",a[i]);
        if (i == size-1) printf("\n");
    }

    scanf("%d", &size);

    a[size] = a[size];

    for (i=0; i<size; i++) {
        printf("%d ",a[i]);
        if (i == size-1) printf("\n");
    }

    // jeez, o tamanho do array é mutável!
    /* Mas etão não era só aumentar o valor tamanho pra 
    criar um array dinâmico?    */


    return 0;
}
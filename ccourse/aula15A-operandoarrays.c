#include <stdio.h>

// Operações com arrays

int append_int(int a[], int tamanho, int capacidade, int x) {
    if (tamanho == capacidade){
        return tamanho;
    }else{
        a[tamanho] = x;
        return tamanho+1;
    }
}

void print_vector(int a[], int tamanho) {
    printf("{ ");
    int i;
    for ( i=0; i<tamanho; i++)
        printf("%d ", a[i]);
    printf("}\n");
}

int insert_int(int a[], int tamanho, int capacidade, int x) {
    if (tamanho == capacidade){
        return tamanho;
    }else{
        a[tamanho] = x;
        return tamanho+1;
        
    }
}

/* --------------------------------------------------------------- */

int main() {
    int capacidade = 100, tamanho = 0;
    int a[capacidade];

    tamanho = append_int(a, tamanho, capacidade , 10);
    print_vector(a, tamanho);
    tamanho = append_int(a, tamanho, capacidade , 25);
    print_vector(a, tamanho);
    tamanho = append_int(a, tamanho, capacidade , 42);
    print_vector(a, tamanho);


    return 0;
}
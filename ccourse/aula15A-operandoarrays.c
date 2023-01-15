#include <stdio.h>

// Operações com arrays

/* Essa primeira implementação das operações com arrays, como não tem 
 * acesso ao endereço de memória, retorna o novo tamanho, aí usa-se ele
 * pra alterar o tamanho atual e depois printar o array. */

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
    printf("}, largura: %d\n", tamanho);
}

int insert_int(int a[], int tamanho, int capacidade, int x, int index) {
    int i;
    if (tamanho == capacidade){
        return tamanho;
    }else{
        for (i=tamanho; i>index; i--){
            a[i] = a[i-1];
        }
        a[index] = x;
        return tamanho+1;
        
    }
}

int find_int(int a[], int tamanho, int x) {
    int index = -1, i;
    for (i=0; i<tamanho; ++i) {
        if (a[i] == x) {
            index=i;
            return index;
        }
    }
    return index;
}

int pop_int(int a[], int tamanho) {
    if (tamanho > 0) {
        tamanho--;
    }
    return tamanho;
}

int remove_int(int a[], int tamanho, int index) {
    int i;
    for (i=index; i<tamanho; i++){
        a[i] = a[i+1];
    }
    return --tamanho;
}

/* -------------------- Minha funções :thumbsup: ---------------------------- */

// Esse insert_int é quebrado: note o laço for. Ele bagunça os elementos depois do index.
int broken_insert_int(int a[], int tamanho, int capacidade, int x, int index) {
    int i;
    if (tamanho == capacidade){
        return tamanho;
    }else{
        for (i=tamanho; i>index; i--){
            a[i-1] = a[i];
        }
        a[index] = x;
        return tamanho+1;
        
    }
}

void printoncap(int a[], int capacidade) {
    printf("{ ");
    int i;
    for ( i=0; i<capacidade; i++)
        printf("%d ", a[i]);
    printf("}\n");
}

/* ------------------------------------------------------------------- */

int main() {
    int capacidade = 100, tamanho = 0;
    int a[capacidade], i;

    for (i=0; i<5; i++) {
        tamanho = append_int(a, tamanho, capacidade, i*3);
    }
    print_vector(a, tamanho);

    tamanho = insert_int(a, tamanho, capacidade , 243, 2);
    print_vector(a, tamanho);

    tamanho = insert_int(a, tamanho, capacidade , 24, 0);
    print_vector(a, tamanho);

    tamanho = insert_int(a, tamanho, capacidade , 2400, 0);
    print_vector(a, tamanho);
    
    tamanho = append_int(a, tamanho, capacidade, 3);
    print_vector(a, tamanho);

    tamanho = append_int(a, tamanho, capacidade, 2400);
    print_vector(a, tamanho);

    printf("resultado do find: %d\n", find_int(a, tamanho, 2400));

    tamanho = remove_int(a, tamanho, 0);
    tamanho = remove_int(a, tamanho, 2);
    tamanho = pop_int(a, tamanho);
    tamanho = pop_int(a, tamanho);
    print_vector(a, tamanho);

    return 0;
}
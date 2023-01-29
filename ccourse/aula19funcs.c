#include "aula19funcs.h"

// Implementação das funções

void append_int(int *a, int *tamanho, int capacidade, int x, int *erro) {
    *erro = 1;
    if (*tamanho < capacidade){
    // pointer de a+*tamanho (a[*tamanho]) recebe x
        *(a+*tamanho)  = x;
        (*tamanho)++;
        *erro = 0;
    }
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
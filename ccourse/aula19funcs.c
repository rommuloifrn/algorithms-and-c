#include "aula19funcs.h"

// Implementação das funções

int append_int(int a[], int *tamanho, int capacidade, int x) {
    if (*tamanho == capacidade){
        return 0;
    }else{
        a[*tamanho] = x;
        // outra forma: a[(*tamanho)++] = x;
        // isso faria tamanho incrementar depois de atribuir x ao elemento.
        *tamanho = *tamanho + 1;
        return 1;
    }
}
/* 
Esta mierda abaixo não funciona pois ela incrementa o pointer tamanho direto, o que faz
ele apenas seguir para o próximo endereço de memória. O que queremos é incrementar o
tamanho do array, então precisamos colocar ele entre parênteses ou incrementar com x = x+1.

int append_int(int a[], int *tamanho, int capacidade, int x) {
    if (*tamanho == capacidade){
        return 0;
    }else{
        a[*tamanho] = x;
        tamanho++;
        return 1;
    }
}
*/
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
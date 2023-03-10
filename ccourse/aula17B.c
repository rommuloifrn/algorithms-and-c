#include <stdio.h>

// ponteiros2: Demonstração de ponteiros

// "*nome" se refere ao conteúdo do apontado pelo ponteiro, "nome" se refere ao valor
// do ponteiro (endereço de memória do apontado), e "&nome" ao endereço de memória do ponteiro.
int main() {
    int a;
    int *p;
    p = &a;
    a = 10;
    //printf("Endereço de a: %p (%lld)\n", &a, (long long)&a);
    printf("Endereço de a: %p (in long double: %lld)\n", &a, &a);
    printf("valor armazenado em a: %d\n", a);
    printf("Endereço de p: %p (in long double: %lld)\n", &p, &p);
    printf("valor armazenado em p: %p\n", p);
    printf("Valor armazenado onde p aponta: %d\n", *p);
    *p = 13;
    printf("Endereço de a: %p (in long double: %lld)\n", &a, &a);
    printf("valor armazenado em a: %d\n", a);
    

    return 0;
}
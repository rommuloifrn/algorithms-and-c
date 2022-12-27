#include <stdio.h>

// Ponteiros como parâmetros

// Função f1, recebe um ponteiro (que aponta, duh) como parâmetro.
// ponteiro recebe 50
// resultado: a variável vira 50. Duh.
void f1 (int *p) {
    *p = 50;
}

int main() {
    int a;
    a = 20;
    int *p1 = &a;           // Conteúdo apontado por p1 recebe endereço de a.
    printf("a: %d\n", a);
    f1(p1);
    printf("a: %d\n", a);

    return 0;
}
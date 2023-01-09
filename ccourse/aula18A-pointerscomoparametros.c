#include <stdio.h>

// Ponteiros como parâmetros

// Função f1, recebe um ponteiro (que aponta, duh) como parâmetro.
// ponteiro recebe 50
// resultado: a variável vira 50. Duh.

/* Um ponteiro usado como parâmetro vai enviar o valor apontado.
   Por algum motivo eu estava confuso com o funcionamento disso,
   mas é até que simples. */

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
    printf("p1 eh: %d\n", *p1);

    return 0;
}
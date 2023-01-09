#include <stdio.h>

// ponteiros3: Aritmética de ponteiros

int main() {
    int a=1, b=2, c=3, d=4, e=5;
    int *p;
    /* Quando quiser manipular o valor armazenado, usa 
    "pointer". Quando quiser manipular o valor apontado, 
    usa "*pointer". é só isso. */
    p = &c;
    printf("a: %d (endereço %p)\n", a, &a);
    printf("b: %d (endereço %p)\n", b, &b);
    printf("c: %d (endereço %p)\n", c, &c);
    printf("d: %d (endereço %p)\n", d, &d);
    printf("e: %d (endereço %p)\n", e, &e);
    printf("\n");
    *p = 100;
    printf("valor armazenado em P (antes de --): %p\n",p);
    printf("valor apontado por P(antes de --): %d\n",*p);
    p--;
    
    *p = 200;
    printf("p: %p\n",p);
    printf("valor armazenado em P: %p\n",p);
    printf("valor apontado por P: %d\n",*p);
    p=p-1;
    *p = 300;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);

    
    

    return 0;
}
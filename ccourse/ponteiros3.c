#include <stdio.h>

// ponteiros3: Aritmética de ponteiros
int main() {
    int a=1, b=2, c=3, d=4, e=5;
    int *p;
    p = &c;
    printf("a ; %d\n", a);
    printf("b ; %d\n", b);
    printf("c ; %d\n", c);
    printf("d ; %d\n", d);
    printf("e ; %d\n", e);
    printf("\n");
    *p = 100;
    p = p+1;
    // Notação pra se referir a "*[]": "conteúdo de []"
    *p = 200;

    printf("a ; %d\n", a);
    printf("b ; %d\n", b);
    printf("c ; %d\n", c);
    printf("d ; %d\n", d);
    printf("e ; %d\n", e);

    
    

    return 0;
}
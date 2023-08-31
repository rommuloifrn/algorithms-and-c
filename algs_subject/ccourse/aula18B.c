#include <stdio.h>

void troca (int *p1, int *p2) {
    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b) troca(&a, &b);
    if (a>c) troca (&a, &c);
    if (b>c) troca(&b, &c);
    printf("a: %d, %d, %d\n", a, b, c);
    

    return 0;
}
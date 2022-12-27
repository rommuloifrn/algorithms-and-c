#include <stdio.h>

// ponteiros1: Endereços
int main() {
    int a, b, c;

    a = 10;
    b = 20;
    c = (a+b)/2;
    //printf("Endereço de a: %p (%lld)\n", &a, (long long)&a);
    printf("Endereço de a: %p (in long double: %lld)\n", &a, &a);
    printf("Endereço de b: %p (in long double: %lld)\n", &b, &b);
    printf("Endereço de c: %p (in long double: %lld)\n", &c, &c);

    return 0;
}
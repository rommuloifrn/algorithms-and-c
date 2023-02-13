#include <stdio.h>

// caso base: n ser 1 = retorna 1
int fibo(int n) {
    if(n<2) return n;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    printf("%d\n", fibo(4));

    return 0;
}
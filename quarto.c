#include <stdio.h>

// Comando que jorgiano usa pra compilar: gcc -Wall -ansi soma.c -o soma

/* Comentário!!! */

int soma(int a, int b){
    int s;
    s = a+b;
    return s;
}

int main(){
    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    s = soma(a, b);
    printf("A soma é %d\n", s);
    return 0;
}
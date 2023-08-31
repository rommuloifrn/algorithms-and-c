#include <stdio.h>

int main(void) {
    int fatorial(int x);
    int contar();
    void contarx();
    void contarxr();

    int numero, resultado, i, x;

    printf("digite um numero inteiro: ");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("o fatorial de %i eh %i\n", numero, resultado);

    printf("digite dois numeros: ");
    scanf("%d %d", &i, &x);
    contar(i, x);

    return 0; 
}

int fatorial(int x) {
    int resultado;

    if(x == 0) {
        resultado = 1;
    }else{
        resultado = x * fatorial(x - 1);
        //          3 * fat(3-1)
    }

    return resultado;
}

int contar(int i, int x){
    if(i<=x){
        printf("%d ", i);
        contar(++i, x);
        return 0;
    }else{
    printf("\n");
        return 0;
    }
}
/* A função abaixo printa os números do maior para o menor. */
void contarx(int x) {
    if (x ==0) {
        printf("%d", x);
    }else{
        printf("%d", x);
        contarx(x-1);
    }
}

/* Já essa, printa do menor para o maior, mas a única diferença
é que caso o parâmetro seja != 0 ela vai primeiro recursar e
depois printar x, o que faz com que ela recurse n vezes e printe
a partir do 0, ou seja, na volta.*/
void contarxr(int x) {
    if (x ==0) {
        printf("%d", x);
    }else{
        contarx(x-1);
        printf("%d", x);
    }
}
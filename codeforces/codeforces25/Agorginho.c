#include <stdio.h>
#include <stdlib.h>

int soma_sublista_bt(int *a, int tam, int soma){
    int r;
    if (soma==0) return 1; // aceita caso a soma S seja 0
    if (soma<0 || tam==0) return 0; // rejeita caso a soma S seja menor que 0 ou o tamanho da lista seja 0 (mas dentro de uma lista vazia não existe zero?)
    r=soma_sublista_bt(a, tam-1, soma-a[tam-1]);
    r=r||soma_sublista_bt(a,tam-1,soma);
    return r;
}

int main(){
    int *a,n,s,i;
    scanf("%d %d",&n,&s);
    a = (int*) malloc(sizeof(int)*n);
    for (i=0 ; i<n ; ++i) scanf("%d",&a[i]);
    printf("%d\n", soma_sublista_bt(a,n,s));

    free(a);
    return 0;
}
#include <stdio.h>

void find(int a[], int tamanho, int x) {
    int ishere = 0, i;

    for (i=0; i<tamanho; i++) {
        if (a[i] == x) {
            ishere = 1;
            break;
        }
    }

    if(ishere = 1) {
        printf("Está aqui sim. Primeira aparição no índice %d\n", i);
    }else{
        printf("Eu não achei nada, não.\n");
    }
    
}

int main() {
    int tamanho, i, x;
    printf("Digite o tamanho do array:\n");
    scanf("%d", &tamanho);

    int a[tamanho];
    for (i=0; i<tamanho; i++){
        printf("Digite o elemento %d\n", i);
        scanf("%d", &a[i]);
    }

    printf("Digite o elemento a procurar\n");
    scanf("%d", &x);

    find(a, tamanho, x);


    return 0;
}
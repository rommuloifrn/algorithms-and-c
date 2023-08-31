#include <stdio.h>

// A equação de tempo é T(F) = n+6
void find(int a[], int tamanho, int x) {
    int ishere = 0, i;              // O(1)

    for (i=0; i<tamanho; i++) {
        if (a[i] == x) {            // O(1)
            ishere = 1;             // O(1) // condicional
            break;                  // O(1)
        }
    }

    if(ishere = 1) {                // O(1)
        printf("Está aqui sim. Primeira aparição no índice %d\n", i); // O(1) // condicional
    }else{
        printf("Eu não achei nada, não.\n");                          // O(1) // condicional
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
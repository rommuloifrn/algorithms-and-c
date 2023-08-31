#include <stdio.h>

// A equação de tempo é T(F) = n+3
void find_minor(int a[], int tamanho) {
    int minor = a[0], i;                        // O(1)
    for (i=1; i<tamanho; i++) {
        if (minor > a[i])                       // O(1)
            minor = a[i];                       // O(1) // eh condicional
    }
    printf("o menor elemento é %d\n", minor);   // O(1)
}

int main() {
    int tamanho, i;
    printf("Digite o tamanho do array:\n");
    scanf("%d", &tamanho);

    int a[tamanho];
    for (i=0; i<tamanho; i++){
        printf("Digite o elemento %d\n", i);
        scanf("%d", &a[i]);
    }

    find_minor(a, tamanho);


    return 0;
}
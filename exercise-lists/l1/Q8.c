#include <stdio.h>

void find_minor(int a[], int tamanho) {
    int minor = a[0], i;
    for (i=1; i<tamanho; i++) {
        if (minor > a[i])
            minor = a[i];
    }
    printf("o menor elemento é %d\n", minor);
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
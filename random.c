#include <stdio.h>

int main() {
    int size, i, x = 42, response = 0;

    printf("write the size of your array:\n");
    scanf("%d", &size);
    int a[size];

    printf("now the elements (integers):\n");
    for (i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i=0; i<size; i++){
        if (a[i] == x) {
            printf("%d é 42.\n", a[i]);
            response = 1;
            break;
        }
    }
    
    
    printf("the response is: %d\n", response);

    return 0;
}
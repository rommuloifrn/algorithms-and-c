#include <stdio.h>

_Bool hello(int a[], int size, int x) {
    int i;
    _Bool response = 0;
    for (i=0; i<size; i++){
        if (a[i] == x)
            response = 1;
            break;
    }
    return response;
}

int main() {
    int size, i, x = 42;

    printf("write the size of your array:\n");
    scanf("%d", &size);
    int a[size];

    printf("now the elements (integers):\n");
    for (i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }

    printf("the response is: %d\n",hello(a, size, x));

    return 0;
}
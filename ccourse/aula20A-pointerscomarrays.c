#include <stdio.h>

// Ponteiros para arrays

int main() {
    int i, a[5], *p;
    for (i=0; i<5; ++i)
        a[i] = i*2+3;
    p = a;
    
    for (i=0; i<5; ++i)
        printf("%d ", *p++);
    printf("\n");


    return 0;
}
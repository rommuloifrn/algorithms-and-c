#include <stdio.h>
#include <math.h>

int doisex(int x) {
    return pow(2, x);
}

int xedois(int x) {
    return pow(x, 2);
}

int main() {
    int i;
    printf("input:           ");
    for (i=1;i<10;i++) {
        printf("%8d ", i);
    }
    printf("\n----------------------------------------------------------------\n");
    printf("dois elevado a x:");
    for (i=1;i<10;i++) {
        printf("%8d ", doisex(i));
    }
    printf("\n");
    printf("x elevado a dois:");
    for (i=1;i<10;i++) {
        printf("%8d ", xedois(i));
    }
    printf("\n");


    return 0;
}
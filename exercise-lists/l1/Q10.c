#include <stdio.h>
#include <math.h>


int a(int n) {
    return pow(2, n)/8 + 2*n;
}

int b(int n) {
    return 10*n + 50;
}

int c(int n) {
    return 10+2 * pow(n, 2) + n;
}

int d(int n) {
    return 100 + 20*log(2);
}

int main() {
    int i, x;
    printf("Input | A | B | C | D\n");
    for (i=2; i<21; i=i+2){
        printf("i = %d:  %d \\ %d \\ %d \\ %d\n", i, a(i), b(i), c(i), d(i));
    }

    return 0;
}
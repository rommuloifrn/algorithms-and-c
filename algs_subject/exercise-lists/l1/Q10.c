#include <stdio.h>
#include <math.h>


double a(double n) {
    return pow(2, n)/8 + 2*n;
}

double b(double n) {
    return 10*n + 50;
}

double c(double n) {
    return 10+2 * pow(n, 2) + n;
}

double d(double n) {
    return 100 + 20*log2(n);
}



int main() {
    int i, x;
    /*
    printf("Input\\ A \\ B  \\ C  \\ D\n");
    for (i=2; i<21; i=i+2){
        printf("i = %d:  %d \\ %d \\ %d \\ %d\n", i, a(i), b(i), c(i), d(i));
    }
    */
    printf("\ninput: ");
    for(i=2;i<21;i=i+2) {
        printf("%7d ", i);
    }
    printf("\n");
    printf("-------------------------------------------------------------------------------------------\n");


    printf("alg A: ");
    for(i=2;i<21;i=i+2) {
        printf("%7.1f ", a(i));
    }
    printf("\n");
    printf("alg B: ");
    for(i=2;i<21;i=i+2) {
        printf("%7.1f ", b(i));
    }
    printf("\n");
    printf("alg C: ");
    for(i=2;i<21;i=i+2) {
        printf("%7.1f ", c(i));
    }
    printf("\n");
    printf("alg D: ");
    for(i=2;i<21;i=i+2) {
        printf("%3.3f ", d(i));
    }
    printf("\n\n");



    return 0;
}
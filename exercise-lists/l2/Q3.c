#include <stdio.h>

long double massloss(long long int t, long double mi) {
    long double mass = mi;
    for(t=0; 1<10; t++){
        mass = mass/2;
        if (mass < 1){
            return t;
        }
    }
}

int main() {
    long double mi;
    int t;

    printf("escreva o tempo:\n");
    scanf("%d", &t);
    printf("agora a massa inicial:\n");
    scanf("%Lf", &mi);
    long double x = massloss(t, mi);
    printf("%.2Lf segundos", x);
}
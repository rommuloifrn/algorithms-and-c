#include <stdio.h>

long double massloss(long long int t, long double mi) {
    long double mass = mi;
    for(t=0; 1<10; t++){
        printf("%f ", mass);
        mass = mass/2;
        if (mass < 1){
            return t;
        }
    }
}

int main() {
    long double t, mi;

    printf("escreva o tempo:\n");
    scanf("%d", &t);
    printf("agora a massa inicial:\n");
    scanf("%f", &mi);

    printf("%d", massloss(t, mi));
}
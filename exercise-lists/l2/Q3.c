#include <stdio.h>

long double massloss(long long int time, long double mi) {
    long double mass = mi, s;
    for(s=0; 1<10; s++){
        mass = mass/2;
        if (mass < 1){
            s *= time;
            return s;
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
    printf("%.2Lf\n", massloss(t, mi));
}
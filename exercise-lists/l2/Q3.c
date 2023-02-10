#include <stdio.h>

/* O crescimento de s é linear. É? No mínimo linear. 
 * mass não cresce: decai.
 * porém s cresce de acordo com mass. Logaritmicamente? Creio que sim.
 * T(massloss) = log2(mass)*time
 * O que acontece é que as vezes que s recebe time (ou seja, o multiplicador de time)
 * eh definido pelo log de mass na base 2. Não absorvi muito bem, mas sei que eh por essa linha.
*/

long double massloss(long long int time, long double mi) {
    long double mass = mi, s;

    for(s=0; mass>1; s=s+time){
        mass = mass/2;      // O(1)
    }

    return s;
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
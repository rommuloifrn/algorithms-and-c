#include <stdio.h>

int main()  {
    long long disposicao, qtdCansativas, qtdRevigorantes, atividades=0;
    scanf("%lld %lld %lld", &disposicao, &qtdCansativas, &qtdRevigorantes);
    long long cansativas[qtdCansativas], revigorantes[qtdRevigorantes], cansativasIndex=0, revigorantesIndex=0;

    for(int i=0; i<qtdCansativas; i++)
        scanf("%lld", &cansativas[i]);
    for(int i=0; i<qtdRevigorantes; i++)
        scanf("%lld", &revigorantes[i]);
    
    while (1==1) {
        if (disposicao>=cansativas[cansativasIndex]) {
            atividades++;
            disposicao -= cansativas[cansativasIndex];
            cansativasIndex++;
        } else if (revigorantesIndex<qtdRevigorantes) {
            atividades++;
            disposicao += revigorantes[revigorantesIndex];
            revigorantesIndex++;
        } else {
            printf("%lld\n", atividades);
            return 0;
        }
    }

}
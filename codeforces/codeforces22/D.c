#include <stdio.h>

int main() {
    int divers, survivors;
    scanf("%d", &divers);
    scanf("%d", &survivors);
    if (divers == survivors) { printf("*\n"); return 0; }
    int callList[survivors], deaths[divers-survivors];

    /* A primeira coisa que pensei foi em armazenar os números dos mergulhadores
    no índice número-1 do array. Por algum momento achei que não daria certo,
    pelo fato de o array vir sujo de lixo na memória. Mas vamos ver.
    1. ordenar o array e percorrê-lo conferindo se o próximo elemento é o número seguinte do anterior;
    2. usar um array somente com zeros, do tamanho do número máximo de mergulhadores, e incrementar os índices correspondentes aos mergulhadores que voltaram;
    3. não ordenar nada, usar um laço de 1 até o número de mergulhadores com outro laço dentro verificando se cada mergulhador se encontra no array, printando os que não estiverem;

    Agora vi que a questão exige que eu ordene a saída. Bah Jorgim.

    Basicamente não precisei de ordenar array nenhum, pois sabendo que os números dos mergulhadores começam em 1 e vão até N, um laço percorre esse espaço enquanto vou verificando se cada número está presente no array dos sobreviventes.
    */

    for(int i=0; i<survivors; i++) {
        scanf("%d", &callList[i]);
    }
    int k = 0;
    int isDead = 1;
    for(int i=1; i<=divers; i++) {
        isDead = 1;
        for(int j=0; j<survivors; j++){
            if (i == callList[j]) isDead = 0;
        }
        if (isDead) {
            deaths[k] = i;
            k++;
        }
    }

    for(int i=0; i<divers-survivors; i++) {
        printf("%d ", deaths[i]);
    }
    printf("\n");

    return 0;
}
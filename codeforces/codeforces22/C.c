#include <stdio.h>

int isHere(long long arr[], int lenght, long long identifier) {
    for(int i=0; i<lenght; i++) {
        if (arr[i] == identifier) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int cases;
    scanf("%d", &cases);
    for (int i=0; i<cases; i++) {

        int amount;
        scanf("%d", &amount);
        long long rams[amount];

        /* Estratégias:
        1. Criar um array do tamanho do número máximo do identificador de carneiro
        2. Criar um array do tamanho do número de carneiros e depois contar os carneiros únicos sempre percorrendo o no array (O(n^2))
        processo ao fazer o 1st método: limpar o array de 1bi, depois incrementar o índice de cada numero lido. Depois conta quantos índices são maior que zero e vualá.
        /\ 7GB DE MEMÓRIA, SEGFAULTAHAHAHAHAHAHA
        */
        int ram;
        int trueRams = 0;
        for (int i=0; i<amount; i++) {
            scanf("%lld", &rams[i]);
        }
        // percorre o array procurando por um número do início até a posição atual.
        trueRams++;
        for(int i=1; i<amount; i++) {
            // 1 É TRUE E 0 É FALSE!!! DIABOS!!!
            if (!isHere(rams, i, rams[i])) {
                trueRams++;
            }
        }
        printf("%d\n", trueRams);
    }

    return 0;
}
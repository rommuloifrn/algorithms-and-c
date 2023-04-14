#include <stdio.h>

int itIsIn(long long arr[], int amount, long long identifier) {
    for(int i=0; i<amount; i++) {
        if (arr[i] == identifier) {
            return 1;
        }
    }
    return 0;
}

int clearArray(long long arr[], int amount) {
    for(int i=0, i<amount; i++) {
        arr[i] = 0;
    }
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
        3. 
        */
        int ram;
        int trueRams = 0;
        for (int i=0; i<amount; i++) {
            scanf("%d", &ram);
            if (!itIsIn(rams, amount, ram)) {
                rams[i] = ram;
                trueRams++;
            }
            
        }
        printf("%d\n", trueRams);
        for(int i=0; i<amount; i++) {
            printf("%lld, ", rams[i]);
        }
        printf("\n");




    }

    return 0;
}
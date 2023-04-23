#include <stdio.h>

void listArr(short arr[], short size) {
    printf("[ ");
    for (int i=0; i<size; i++) {
        printf("%hu ", arr[i]);
    }
    printf("]\n");
}

void cleanArr(short arr[], short size) {
    for (int i=0; i<size; i++) {
        arr[i] = 0;
    }
}

void giveWinner(short arr[], short size) {
    short winner = 0;
    for (int i=0; i<size; i++) {
        if (arr[i] >= arr[winner]) winner = i;
    }
    printf("%hu\n", winner+1);
}

int main() {
    short players, rounds;
    scanf("%hu", &players);
    scanf("%hu", &rounds);
    int plays = players*rounds;
    short playsArray[plays]; cleanArr(playsArray, plays);
    short points[players]; cleanArr(points, players);

    for(int i=0; i<plays; i++) {
        scanf("%hu", &playsArray[i]);
    }
    short player=-1;

    for(int i=0; i<plays; i++) {
        player++;
        points[player] += playsArray[i];
        if (player == players-1) player = -1;
    }
    //listArr(playsArray, plays);
    //listArr(points, players);
    giveWinner(points, players);

    return 0;
}
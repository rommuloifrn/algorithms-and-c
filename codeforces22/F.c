#include <stdio.h>

void cleanBoard(short board[10][10]) {
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            board[i][j] = 0;
        }
    }
}

void printBoard(short board[10][10]) {
    for(int i=0; i<10; i++) {
        printf("[ ");
        for(int j=0; j<10; j++) {
            printf("%hi ", board[i][j]);
        }
        printf("]\n");
    }
}

int main() {
    int ships;
    scanf("%d", &ships);
    short board[10][10];
    cleanBoard(board);

    // formato: posição / tamanho / y / x

    for (int i=0; i<ships; i++) {
        short position, size, x, y;
        scanf("%hi", &position);
        scanf("%hi", &size);
        scanf("%hi", &y);
        scanf("%hi", &x);

        if (position==0) {
            for(int j=x-1; j<size+x-1; j++) {
                if(board[y-1][j] == 1 || (x+size-1)>10) {
                    printf("N\n"); return 0;
                }
                board[y-1][j] = 1;
            }
        }else{
            for(int j=y-1; j<size+y-1; j++) { 
                if(board[j][x-1] == 1 || (y+size-1)>10) {
                    printf("N\n"); return 0;
                }
                board[j][x-1] = 1;
            }
        }
    }

    //printBoard(board);
    printf("Y\n");

    return 0;
}
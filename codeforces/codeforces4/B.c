#include <stdio.h>

void pa( int height, int length, int arrai[20][20]) {
    printf("--------------------------------\n");
    for (int i=0; i<height; i++) {
        for(int j=0; j<length; j++) {
            printf("%d ", arrai[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------\n");
}

int lab (int y, int x, int height, int length, int arrai[20][20]) {
    if (!(x==length-1 && y == height-1)) { // verfica se chegou no final
        if (x==-1 || y==-1 || x==length || y == height) return 0; // verifica se saiu do lab
        arrai[y][x] = 9;

        int passd = 0;
        if (arrai[y-1][x] == 0) if (lab(y-1, x, height, length, arrai))           { passd += 1; /*arrai[y][x] = 0;*/ };  // cima
        if (!passd && arrai[y][x+1] == 0) if (lab(y, x+1, height, length, arrai)) { passd += 1; /*arrai[y][x] = 0;*/ };  // direita
        if (!passd && arrai[y+1][x] == 0) if (lab(y+1, x, height, length, arrai)) { passd += 1; /*arrai[y][x] = 0;*/ };  // baixo
        if (!passd && arrai[y][x-1] == 0) if (lab(y, x-1, height, length, arrai)) { passd += 1; /*arrai[y][x] = 0;*/ };  // esquerda

        arrai[y][x] = 0;
        
        return passd;
    } else {
        //printf("y = %d, x = %d\n", y, x);
        //pa(height, length, arrai);
        return 1;
    }
}


int main() {
    int height, length;
    scanf("%d", &height);
    scanf("%d", &length);

    int arrai[20][20];
    for (int i=0; i<height; i++) {
        for(int j=0; j<length; j++) {
            scanf("%d", &arrai[i][j]);
        }
    }
    
    //pa(height, length, arrai);
    
    printf("%d\n", lab(0, 0, height, length, arrai));

    return 0;
}
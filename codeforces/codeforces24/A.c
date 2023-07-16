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
// por algum motivo esse código vai pra baixo primeiro ao invés de ir pra direita no caso de teste 1.
int lab (int x, int y, int height, int length, int arrai[20][20]) {
    if (!(x==length-1 && y == height-1)) { // verfica se chegou no final
        if (x==-1 || y==-1 || x==length || y == height) return 0; // verifica se saiu do lab
        //printf("eh na sola da bota! eh na palma da bota! (%d %d)\n",y,x); // eh na sola da bota
        arrai[y][x] = 9;
        if (arrai[y+1][x] == 0) { // cima
            if (lab(x, y+1, height, length, arrai)) {
                arrai[y][x] = 0;
                return 1;
            }
        }
        if (arrai[y][x+1] == 0) { // direita
            if (lab(x+1, y, height, length, arrai)) {
                arrai[y][x] = 0;
                return 1;
            }
        } 
        if (arrai[y-1][x] == 0) { // baixo
            if (lab(x, y-1, height, length, arrai)) {
                arrai[y][x] = 0;
                return 1;
            }
        } 
        if (arrai[y][x-1] == 0) { // esquerda
            if (lab(x-1, y, height, length, arrai)) {
                arrai[y][x] = 0;
                return 1;
            }
        }
        return 0;
    } else {
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
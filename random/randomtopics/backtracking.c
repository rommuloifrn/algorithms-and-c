#include <stdio.h>

int labirinto_bt(int labirinto[20][20], int linha, int coluna, int x, int y) {
    if (x==-1 || y==-1 || x==coluna || y==linha || labirinto[y][x]!=0)
        return 0;
    if (x==coluna-1 && y==linha-1)
        return 1;

    labirinto[y][x] = 9;
    int ans = 0 ;

    ans = labirinto_bt(labirinto, linha, coluna, x, y+1);
    if (ans == 0)
        ans = labirinto_bt(labirinto, linha, coluna, x+1, y);
    if (ans == 0)
        ans = labirinto_bt(labirinto, linha, coluna, x-1, y);
    if (ans == 0)
    ans = labirinto_bt(labirinto, linha, coluna, x, y-1);

    labirinto[y][x] = 0;
    return ans;
}

int main(){
    int linha, coluna, labirinto[20][20];
    scanf("%d %d", &linha, &coluna);
    for (int i=0 ; i<linha ; ++i)
        for (int j=0 ; j<coluna ; ++j) {
            scanf("%d",&labirinto[i][j]);
        }
    printf("%d\n", labirinto_bt(labirinto, linha, coluna, 0, 0));
    

    return 0;
}
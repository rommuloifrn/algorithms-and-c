#include <stdio.h>

/* 
    Como nos exemplos gráficos de recursividade, as chamadas vão
percorrendo seus devidos caminhos e retornam se foi possível ou não.
    Caso não seja possível, ans será zero. Por isso ele não confere caso
seja 1, como os ifs das chamadas requerem. */

int lab_bt(char lab[20][20], int l, int c, int x, int y){
    // REJEITA
    /* as 4 primeiras condições são caso se tente sair do labirinto.
       a seguinte é pra garantir que só se movimente em células "B".
    */
    if (x<0 || y<0 || x>=c || y>=l   ||   lab[y][x] != 'B') return 0;
    // ACEITA
    if(x==c-1 && y==l-1) return 1;

    

    // FAZER CHAMADAS RECURSIVAS
    lab[y][x]='P';
    // ESQUERDA
    int ans = lab_bt(lab, l, c, x-1, y);
    // BAIXO
    if (ans == 0 ||/*Ree*/ !ans) ans = lab_bt(lab, l, c, x, y+1);
    // DIREITA
    if (!ans) ans = lab_bt(lab, l, c, x+1, y);
    // CIMA
    if (!ans) ans = lab_bt(lab, l, c, x, y-1);

    lab[y][x]="B";

    return ans;
}

int sol_lab(char lab[20][20], int l, int c) {
    return lab_bt(lab, l, c, 0, 0);
}

int main(){
    char lab[20][20];
    int l, c, i, j;
    scanf("%d %d", &l, &c);
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            scanf(" %c", &lab[i][j]);
    int ans = sol_lab(lab, l, c );
    printf("%d\n", ans);

    return 0;
}
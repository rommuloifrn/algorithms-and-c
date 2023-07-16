#include <stdio.h>

int main() {
    // ESQUECI DE LER A ENTRADA DA QUESTAO AAAAAAAAAAAAAAAAAAAAAAA
    // e eu tava compilando o arquivo errado...
    int chicken = scanf("%d", &chicken), beef = scanf("%d", &beef), pasta = scanf("%d", &pasta);
    printf("%d %d %d\n", chicken, beef, pasta);
    chicken -= scanf("%*d"); beef -= scanf("%*d"); pasta -= scanf("%*d");
    printf("%d %d %d\n", chicken, beef, pasta);
    int unluckys = 0;
    if (chicken<0) unluckys += chicken;
    if (beef<0) unluckys += beef;
    if (pasta<0) unluckys += pasta;
    printf("%d %d %d %d\n", unluckys, chicken, beef, pasta);

    return 0;
}
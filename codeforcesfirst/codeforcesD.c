#include <stdio.h>
int main() {
    int inicio, final, dh, dm;

    scanf("%d", &inicio);
    scanf("%d", &final);
    dm = final - inicio;
    dh = dm / 60;
    dm = dm % 60;

    printf("%02d:%d\n", dh, dm);

    return 0;
}
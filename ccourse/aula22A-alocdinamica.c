#include <stdio.h>
#include <stdlib.h>

// Alocação dinâmica


// nao entendi como funfa o limite dum array criado por malloc.

int main() {
    int * p1;
    p1 = malloc(4);
    *p1 = 10;
    p1[1] = 24;
    p1[2] = 27;
    p1[3] = 30;
    p1[4] = 35;
    p1[5] = 3;
    p1[6] = 40;
    
    
    
    printf("%d\n", *p1);
    printf("%d\n", *(p1+1));
    printf("%d\n", *(p1+5));

    free(p1);

    return 0;
}
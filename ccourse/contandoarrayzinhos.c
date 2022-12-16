#include <stdio.h>

int main(){
    int i, a[10];
    int zerocount = 0;
    
    for (i=0 ; i<10 ; ++i){
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            zerocount++;
        }
    }

    // printa cada elemento do array
    for (i=0 ; i<10 ; ++i){
        printf("%d ", a[i]);
    }
    printf("\nzerocount eh %d\n", zerocount);
    // printa cada elemento em ordem inversa
    for (i=9; i>-1; --i) {
        printf("%d ", a[i]);
    }

    return 0;
}
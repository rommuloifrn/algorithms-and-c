#include <stdio.h>

int main() {
    int a[10]; /* 0...9 */
    int i;

    for (i=0; i<10; ++i){
        a[i] = i*3;
    } 
    
    printf("a");

    for (i=0;i<10;++i){
        printf("%d ", a[i]);
    }

    return 0;
}
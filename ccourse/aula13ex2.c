#include <stdio.h>

int main(){
    int i;
    int index = 0;
    
    int a[1000];
    int number;
    
    while (number != -1) {
        scanf("%d", &number);
        a[index] = number;
        index++;
    }

    printf("a = { ");
    for (i=0; i<index; i++) {
        printf("%d ", a[i]);
    }
    printf("}\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    double i;
    for (i=1; i!=0.1; i=i*20) {
        printf("%f", i);
        i = i/3;
    }
    return 0;
}
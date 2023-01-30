#include <stdio.h>

int main() {
    long long int i, max, a, b;
    scanf("%lli", &max);
    printf("------------------------------------\nsendo T(A) = 100n+500 e T(B) = 2n^2+10:\n------------------------------------\n");
    for (i=0; i<max+1; i++) {
        a = 100*i+500;
        b = 2*(i*i)+10;
        printf("A(%lli) = %lli | %lli = B(%lli)\n", i, a, b, i);
    }

    return 0;
}
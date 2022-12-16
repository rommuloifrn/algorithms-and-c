#include <stdio.h>
int main() {
    long long x, i;
    scanf("%lld", &x);

    for (i = 1; i<=x ; i++) {
        if (x % i == 0){
        printf("%lld ", i);
        }
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

void wa(long long x) {
    printf("%lld ", x);
    if (x == 1) { printf("\n"); return; };

    if (x%2 == 0) x /= 2; 
    else x = (x*3)+1;

    wa(x);
}

int main() {
    long long x;
    scanf("%lld", &x);
    wa(x);

    return 0;
}
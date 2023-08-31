#include <stdio.h>

long long int pot(int a, int b) {
    long long int x = a, i; // O(1)
    for (i=1; i<b; i++) {
        x*=a;               // O(1)
    }
    return x;
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%lli", pot(a, b));
}
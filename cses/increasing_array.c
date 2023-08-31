#include <stdio.h>

int main() {
    long long n, moves = 0;
    scanf("%lld", &n);
    long long arr[n];

    for (int i=0; i<n; i++)
        scanf("%lld", &arr[i]);

    for (int i=1; i<n; i++)
        while (arr[i]<arr[i-1]){
            arr[i]++; moves++; }

    printf("%lld\n", moves);
    return 0;
}
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    
    for (int i=0; i<n; i++)
        arr[i] = 0;


    for (int i=1; i<n; i++){
        scanf("%d", &x);
        arr[x-1] = 1;
    }
    
    for (int i=0; i<n; i++)
        if (arr[i] == 0) printf("%d\n", i+1);

    return 0;
}
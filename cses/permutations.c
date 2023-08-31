#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n==3 || n==2) { printf("NO SOLUTION\n"); return 0; }
    int arr[n], x=0, y=n>>1;

    for (int i=1; i<=n; i++) {
        if (i&1) {
            arr[y] = i; y++; 
        } else {
            arr[x] = i; x++; 
        }
    }
    
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    

    // if (n&1) {
    //     y = (n>>1);
    //     for (int i=1; i<=n; i++) {
    //         if (i&1) {
    //             arr[y] = i;
    //             y++;
    //         } else {
    //             arr[x] = i;
    //             x++;
    //         }
    //     }
    // }
    


    return 0;
}
#include <stdio.h>

int minor(int a[], int size) {
    int i, minor;
    minor = a[0];
    for (i=1; i<size; i++) {
        if (a[i] < minor)
            minor = a[i];
    }
    return minor;
}
int main(){
    int size, i;
    printf("write the size of your array:\n");
    scanf("%d", &size);
    int a[size];
    printf("now the elements (integers):\n");
    for (i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("the minor is %d.\n", minor(a, size));

    return 0;
}
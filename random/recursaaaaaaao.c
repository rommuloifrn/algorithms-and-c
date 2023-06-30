#include <stdio.h>

int revrecrec(int counter, int n) { // imprime de counter até n
    if (counter >= n+1) return 0;
    printf("%d\n", counter);
    return revrecrec(counter+1, n);
}

int recrec(int n) { // imprime de n até 0
    if (n == 0) return 0;
    printf("%d\n", n);
    return recrec(n-1);
    
}

int main() {
    revrecrec(0, 20);

    return 0;
}
#include <stdio.h>

void primum(long long int a) {
    unsigned long long int i = 2;
    int primo = 1;
    
    while (i < a/2+1) {
        if (a%i == 0) {
            primo = 0;
            break;
        }
        i++;
    }
    if (primo == 1) {
        printf("é primo.\n");
    }else if(primo == 0){
        printf("Não é primo. Divisor aqui: %llu\n", i);
    }else{
        printf("what the fuck?");
    }
}

int main() {
    unsigned long long int a;
    scanf("%llu", &a);
    primum(a);

    return 0;
}

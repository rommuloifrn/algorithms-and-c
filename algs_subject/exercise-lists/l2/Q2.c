#include <stdio.h>

long long int newvirus(long long int pop) {
    long long int dias, inf = 1;
    for (dias=1; 1<10; dias++){
        inf = inf*2;
        if(inf >= pop){
            return dias;
        }
    }
    
}

int main() {
    long long int pop;
    scanf("%lli", &pop);
    printf("%lli", newvirus(pop));
}
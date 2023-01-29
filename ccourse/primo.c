#include <stdio.h>
int main() {

    long long int a;
    int i = 2;
    int primo = 1;
    scanf("%lli", &a);
 

    while (i < a/2+1) {
        if (a%i == 0) {
            primo = 0;
            break;
        }
        i++;
    }

    if (a == 2){
        primo = 1;
        }

    printf("%d\n", primo);

}
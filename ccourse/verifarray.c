#include <stdio.h>

int main(){
    int x, y, i;
    int myarr[4] = {2, 26, 6, 25};
    
    for (i = 0; i < 4-2; i++) {

        if (myarr[i] > myarr[i+1]) {
            y = myarr[i+1];
        }else{
            y = myarr[i];
        }
        printf("O menor é %d e i é %d\n", y, i);
    }

    printf("%d\n", y);


    return 0;
}
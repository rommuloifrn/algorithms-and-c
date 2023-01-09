#include <stdio.h>

// Ponteiros para arrays

/* Um elemento de array pode ser representado tanto por a[index] quanto por 
 * *a+index (*a eh o index zero de a[])
 * quanto por *[a+index]
 *
 * */

int main(){
	int i, a[3];
	for (i=0; i<3; i++) {
		a[i] = i*2+3;
	}
	printf("usando *a+1: %d\n", *a+1);
	printf("usando *(a+1): %d\n", *a+1);
	printf("usando a[1]: %d\n", *a+1);

	return 0;
}

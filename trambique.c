#include <stdio.h>

// Ponteiros para arrays

/* Um elemento de array pode ser representado tanto por a[index] quanto por 
 * quanto por *(a+index)
 */

int main(){
	int i, a[3];
	printf("{ ");
	for (i=0; i<3; i++) {
		a[i] = i*2+3;
		printf("%d ", a[i]);
	}
	printf("}\n");

	printf("usando *a+1: %d (dá errado)\n", *a+1);
	printf("usando *(a+1): %d\n", *(a+1));
	printf("usando a[1]: %d\n", a[1]);

	return 0;
}

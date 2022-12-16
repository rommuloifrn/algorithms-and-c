#include <stdio.h>

int main() {
int n, i;
int soma = 0;
scanf("%d", &n);
for (i=0 ; i<n ; ++i) {
	soma+=i;
}
printf("%d\n", soma);
return 0;
}

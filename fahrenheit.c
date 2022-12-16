#include <stdio.h>

	/* printa fahrenheit-celsius tabela
	*/

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // limite baixo da tabela de temperatura
	upper = 300; // limite alto
	step = 20; // tamanho do passo

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

#include <stdio.h>
#include <stdlib.h>

/* Menor que 100 div por 3 */

int main() {
	int i;
	for (i=3; i<=100; i+=3){ // O incremento de 3 em 3 é sinalizado pelo "i+=3"	
		printf("%d\n", i);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Apresentar o rendimento de um depósito */

int main(int argc, char *argv[]) {
	float dep,taxa,rend,tot;
	
	printf("Informe o valor do deposito: ");
	scanf("%f", &dep);
	printf("Informe a taxa de juros: ");
	scanf("%f", &taxa);
	rend=dep*(taxa/100);
	tot= dep+rend;
	printf("\nO rendimento e: %2.f", rend);
	printf("\nO total e: %2.f", tot);
	return 0;
}

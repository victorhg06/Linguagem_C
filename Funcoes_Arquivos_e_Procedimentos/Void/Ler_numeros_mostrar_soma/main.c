#include <stdio.h>
#include <stdlib.h>

/* Ler dois números e exibir a soma através de um procedimento */

void somadoisnumeros(){    // Início do procedimento
	int x,y, resultado;   // Variáveis locais
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	resultado= x+y;
	printf("Resultado e: %d\n", resultado);
}

int main() {
	somadoisnumeros();  // Aqui eu chamo o procedimento
	somadoisnumeros();
	somadoisnumeros();
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Ler dois n�meros e exibir a soma atrav�s de um procedimento */

void somadoisnumeros(){    // In�cio do procedimento
	int x,y, resultado;   // Vari�veis locais
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

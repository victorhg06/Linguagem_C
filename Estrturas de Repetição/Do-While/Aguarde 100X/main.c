#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cont; // Declaração da variável contadora
	cont=0;  // Atribuição de um valor a variável fora da estrutura
	do {    // Abertura dos colchetes
		printf("Aguarde ...\n");
		cont+=5; // Método de incremento aqui será incrementado de 5 em 5
	} while (cont<10); // Fechamento dos colchetes do "DO" e início da condição 
	return 0;
}

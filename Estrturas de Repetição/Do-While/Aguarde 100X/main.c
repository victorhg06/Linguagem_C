#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cont; // Declara��o da vari�vel contadora
	cont=0;  // Atribui��o de um valor a vari�vel fora da estrutura
	do {    // Abertura dos colchetes
		printf("Aguarde ...\n");
		cont+=5; // M�todo de incremento aqui ser� incrementado de 5 em 5
	} while (cont<10); // Fechamento dos colchetes do "DO" e in�cio da condi��o 
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/* Ler um vetor e escrever em ordem contr�ria  */

int main() {
	int numero[TAM];
	int i;
	
	for (i=0;i<TAM;i++){
		printf("Digite o numero %d: ", i+1); // O objetivo do "i+1" � que apare�a no prompt o n�mero 1 no in�cio, n�o o 0
		scanf("%d", &numero[i]);
	}
	 
	for (i=4; i>=0;i--){   // Para que ele comece a ler ao contr�rio ele precisa come�ar na �ltima posi��o "4" e ir at� a primeira "0" o "i--" significa que ele decresceria
		printf("\n%d", numero[i]);
	}
	
	return 0;
}

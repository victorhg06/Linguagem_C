#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/* Ler um vetor e escrever em ordem contrária  */

int main() {
	int numero[TAM];
	int i;
	
	for (i=0;i<TAM;i++){
		printf("Digite o numero %d: ", i+1); // O objetivo do "i+1" é que apareça no prompt o número 1 no início, não o 0
		scanf("%d", &numero[i]);
	}
	 
	for (i=4; i>=0;i--){   // Para que ele comece a ler ao contrário ele precisa começar na última posição "4" e ir até a primeira "0" o "i--" significa que ele decresceria
		printf("\n%d", numero[i]);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Desenvolver um prograa para um professor informar as 4 notas bimestrais de um aliuno */

int main() {
	float notas[4]; // Declaração do vetor de 4 posiçõs
	printf("Digite a nota 1: \n"); 
	scanf("%f", &notas[0]);
	printf("Digite a nota 2: \n");
	scanf("%f", &notas[1]);
	printf("Digite a nota 3: \n");
	scanf("%f", &notas[2]);
	printf("Digite a nota 4: \n");
	scanf("%f", &notas[3]);
	printf("Suas notas foram: %f %f %f e %f", notas[0], notas[1], notas[2], notas[3]);
	// O problema dessa estrutura desse jeito é que ela fica bem repetitiva, podemos otimizar ela, usando uma estrutura "for"
	return 0;
}

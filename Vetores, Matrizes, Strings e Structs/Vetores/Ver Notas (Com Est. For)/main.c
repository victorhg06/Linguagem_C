#include <stdio.h>
#include <stdlib.h>

/* Programa para um professor lançar notas, utilizando vetores e a estrutura for */

int main() {
	float notas [4]; // eclaração do vetor com 4 posições
	int i;           // Uma variável contadora
	for(i=0; i<4; i++){ // Iniciando a variável contadora em 0 que é a primeira posição do vetor
		printf("Digite a nota %d: \n", i+1); // Fazer a leitura das notas coloque o " i+1" para ele começar a ler no 1
		scanf("%f", &notas[i]);
	}
	for (i=0; i<4; i++){
		printf("%2.1f\n", notas[i]); // Mostrar na tela as notas de declaradas
	}
	return 0;
}

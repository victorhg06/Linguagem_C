#include <stdio.h>
#include <stdlib.h>

/* Programa para um professor lan�ar notas, utilizando vetores e a estrutura for */

int main() {
	float notas [4]; // eclara��o do vetor com 4 posi��es
	int i;           // Uma vari�vel contadora
	for(i=0; i<4; i++){ // Iniciando a vari�vel contadora em 0 que � a primeira posi��o do vetor
		printf("Digite a nota %d: \n", i+1); // Fazer a leitura das notas coloque o " i+1" para ele come�ar a ler no 1
		scanf("%f", &notas[i]);
	}
	for (i=0; i<4; i++){
		printf("%2.1f\n", notas[i]); // Mostrar na tela as notas de declaradas
	}
	return 0;
}

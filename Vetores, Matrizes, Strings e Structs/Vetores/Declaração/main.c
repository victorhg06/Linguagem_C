#include <stdio.h>
#include <stdlib.h>

/* Aprendendo o b�sico sobre declara��o de vetores */

int main() {
	float notas[4]={1, 2, 5, 8}; // Aqui foi declarado um vetor de tamanho 4, suas posi��es v�o de 0 at� 3 0=1, 1=2, 2=5 e 3=8
	printf("%f", notas[3]); // Aqui eu pedi para mostrar na tela o vetor na posi��o 3, ou seja 8
	// Posso fazer de outra forma, declarando uma constante de tamanho fixo e colocando essa constante dentro do tamanho do vetor, igual no exemplo abaixo
	return 0;
}

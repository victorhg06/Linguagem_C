#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler um número e apresentar seu quadrado e sua raiz quadrada */

int main(int argc, char *argv[]) {
	int num, quad;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	quad=num*num;
	sqrt(num);
	
	printf("\nO quadrado do numero digitado e: %d", quad);
	printf("\nA raiz quadrada e igual a: %.1f", sqrt(num)); //Aqui usei o %f pois o resultado da raiz é um número do tipo float e não inteiro
	return 0;
}

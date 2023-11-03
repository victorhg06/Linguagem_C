#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Programa que faça a raiz quadrada de um número par */

int main(int argc, char *argv[]) {
	int num;
	float raiz;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	if (num%2==0)             // Detalhe importante, aqui o sinal que representa o igual é "==" ou seja, são dois iguais
	{
		raiz=sqrt(num);
		printf("\nA raiz quadrada de %d e igual a: %f", num,raiz);
	}
	return 0;
}

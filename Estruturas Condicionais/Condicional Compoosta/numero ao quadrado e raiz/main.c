#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Caso o numero seja par, tirar a raiz quadrada, caso seja impar mostrar o quadrado dele */

int main(int argc, char *argv[]) {
	int num,quad;
	float raiz;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num%2==0){
		raiz=sqrt(num);
		printf("\nO numero e par");
		printf("\nA raiz quadrada e: %.2f", raiz);
	}
	else {
		quad=num*num;
		printf("\nO numero e impar");
		printf("\nO quadrado do numero e: %d", quad);
	}
	return 0;
}

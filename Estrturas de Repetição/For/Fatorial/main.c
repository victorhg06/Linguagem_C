#include <stdio.h>
#include <stdlib.h>

/* Escrever um algoritimo que fa�a a fatora��o de um n�mero */

int main() {
	int num, cont, fat;   // Declarado a vari�vel "num" para receber o valor do usu�rio, a vari�vel "cont" para fazer a contagem e a vari�vel "fat" para realizar os c�lculos
	printf("Informe um valor: ");
	scanf("%d", &num);
	fat=1;  // Declaro o "fat" como valendo 1 no come�o
	for (cont=1; cont<=num; cont++){ // Estrutura "for" inicia no 1 vai at� o valor digitado pelo usu�rio passando de 1 em 1
		fat=fat*cont; // Fat inicia valendo 1 e o cont tamb�m "1*1=1", fat recebe o valor de "1", logo o cont vai para o segundo n�mero e fat mant�m 1, "fat=1*2=2", "fat" recebe o valor 2
	}
	printf("O valor do fatorial de %d e igual a : %d", num, fat);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Escrever um algoritimo que faça a fatoração de um número */

int main() {
	int num, cont, fat;   // Declarado a variável "num" para receber o valor do usuário, a variável "cont" para fazer a contagem e a variável "fat" para realizar os cálculos
	printf("Informe um valor: ");
	scanf("%d", &num);
	fat=1;  // Declaro o "fat" como valendo 1 no começo
	for (cont=1; cont<=num; cont++){ // Estrutura "for" inicia no 1 vai até o valor digitado pelo usuário passando de 1 em 1
		fat=fat*cont; // Fat inicia valendo 1 e o cont também "1*1=1", fat recebe o valor de "1", logo o cont vai para o segundo número e fat mantém 1, "fat=1*2=2", "fat" recebe o valor 2
	}
	printf("O valor do fatorial de %d e igual a : %d", num, fat);
	return 0;
}

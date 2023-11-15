#include <stdio.h>
#include <stdlib.h>

/* Fazer um programa que pegue um valor e some seus valores até que seu resultado seja <100 */

int main() {
	int soma, valor;
	soma=0; // Devo fazer que sempre essa variável contadora inicie com 0 e esteja fora do laço
	while (soma<=100){
		printf("Digite um valor: \n");
		scanf("%d", &valor);
		soma= soma + valor;   //Aqui faz com que va se somando os valores digitados
	}
	return 0;
}

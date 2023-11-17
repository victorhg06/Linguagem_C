#include <stdio.h>
#include <stdlib.h>

/* Fatorial usando "do-while" */

int main() {
	int num, cont, fat;
	printf("Digite um valor: ");
	scanf("%d", &num);
	cont=num;
	do {
		fat=fat*cont; // fat vale 1 automaticamente e o contador vale o número digitado pelo usuário (1=1*5)> (5=5*4)> (20=20*3)> (60=60*2) fat=120 
		cont--; // Aqui realiza o decremento de 1 em 1
	} while (cont>0); // Enquanto o contador for maior do que "0" ele irá realizar as contas
	printf("O valor do fatorial de %d e igual a: %d", num, fat);
	return 0;
}

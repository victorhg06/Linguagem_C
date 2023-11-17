#include <stdio.h>
#include <stdlib.h>

/* Verificar se um número é primo */

int main() {
	int num, i, qntd; // A variável "qntd" é uma variável acumuladora e vai nos servir para mostar se um número é primo ou não
	printf("Digite um numero: ");
	scanf("%d", &num);
	qntd=0;
	for(i=1; i<=num; i++){ // "i" começa com 1 e vai até o número digitado
		if (num%i==0){
			qntd++; // Se um número dividido por mais de 2 números (1 ele mesmo) der resto zero, então este número não é primo
		}
	}
	if (qntd==2){ // Todo número primo é dividio por ele mesmo e por 1.
		printf("O numero %d e primo", num);
	}
	else{
		printf("O numero %d nao e primo", num);
	}
	return 0;
}

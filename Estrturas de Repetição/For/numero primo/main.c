#include <stdio.h>
#include <stdlib.h>

/* Verificar se um n�mero � primo */

int main() {
	int num, i, qntd; // A vari�vel "qntd" � uma vari�vel acumuladora e vai nos servir para mostar se um n�mero � primo ou n�o
	printf("Digite um numero: ");
	scanf("%d", &num);
	qntd=0;
	for(i=1; i<=num; i++){ // "i" come�a com 1 e vai at� o n�mero digitado
		if (num%i==0){
			qntd++; // Se um n�mero dividido por mais de 2 n�meros (1 ele mesmo) der resto zero, ent�o este n�mero n�o � primo
		}
	}
	if (qntd==2){ // Todo n�mero primo � dividio por ele mesmo e por 1.
		printf("O numero %d e primo", num);
	}
	else{
		printf("O numero %d nao e primo", num);
	}
	return 0;
}

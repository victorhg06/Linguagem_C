#include <stdio.h>
#include <stdlib.h>

/* Cliente escolher entre soma, subtração, multiplicação ou divisão */

int main(int argc, char *argv[]) {
	int opcao,num1,num2;
	float result;                             // A variável result foi declarada como float, pois seu resultado pode ser um número negativo
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Escolha a operacao: \n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n");
	scanf("%d", &opcao);
	switch (opcao){
		case 1: (result=num1+num2);            // Repare que há apenas um sinal de igual na variável result, pois é uma atribuição e não um resultado, logo devo usar apenas um "igual"
		printf("A soma e: %1.f", result);
			break;
		case 2: (result=num1-num2);
		printf("A subtracao e: %1.f", result);
			break;
		case 3:(result=num1*num2);
		printf("A multiplicacao e: %1.f", result);
			break;
		case 4: (result=num1/num2);
		printf("A divisao e: %1.f", result);
			break;
		default: printf("Opcao Invalida");
			break;								
	}
	
	
	return 0;
}

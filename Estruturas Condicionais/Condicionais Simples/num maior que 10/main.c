#include <stdio.h>
#include <stdlib.h>

/* Fazer mostrar na tela se o n�mero digitado for maior do que 10 */

int main(int argc, char *argv[]) {
	float num;                               
	printf("Digite um numero: ");
	scanf("%f", &num);                           // Sempre lembrar de colocar o e-comercial antes da vari�vel
	if (num>10)                                 // N�o esquecer os parenteses
		{                                      //Abertura de chaves
			printf("Valor maior que 10\n");   //Aqui dentro � necess�rio fechar o bloco de comandos com ponto e v�rgula
		}                                     //Fechamento de chaves, sem ponto e v�rgula
		
	return 0;
}

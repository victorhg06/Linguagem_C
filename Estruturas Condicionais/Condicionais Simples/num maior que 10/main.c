#include <stdio.h>
#include <stdlib.h>

/* Fazer mostrar na tela se o número digitado for maior do que 10 */

int main(int argc, char *argv[]) {
	float num;                               
	printf("Digite um numero: ");
	scanf("%f", &num);                           // Sempre lembrar de colocar o e-comercial antes da variável
	if (num>10)                                 // Não esquecer os parenteses
		{                                      //Abertura de chaves
			printf("Valor maior que 10\n");   //Aqui dentro é necessário fechar o bloco de comandos com ponto e vírgula
		}                                     //Fechamento de chaves, sem ponto e vírgula
		
	return 0;
}

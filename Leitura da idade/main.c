#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade;    //declarei uma vari�vel chamada idade do tipo inteiro
	printf("Digite a idade: \n"); // o "\n" est� servindo para pular de linha, � um formatador de texto
	scanf("%d", &idade);       // Aqui o "%d" foi colocado para ler um n�mero decimal inteiro seguido de uma v�rgula de ume comercial e da vari�vel
	printf("A idade digitada foi = %d", idade);	   // Aqui o %d foi digitado para que eu saiba o resultado que eu quero, no caso um valor decimal inteiro
	return 0;
}

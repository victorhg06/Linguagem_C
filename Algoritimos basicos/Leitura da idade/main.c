#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade;    //declarei uma variável chamada idade do tipo inteiro
	printf("Digite a idade: \n"); // o "\n" está servindo para pular de linha, é um formatador de texto
	scanf("%d", &idade);       // Aqui o "%d" foi colocado para ler um número decimal inteiro seguido de uma vírgula de ume comercial e da variável
	printf("A idade digitada foi = %d", idade);	   // Aqui o %d foi digitado para que eu saiba o resultado que eu quero, no caso um valor decimal inteiro
	return 0;
}

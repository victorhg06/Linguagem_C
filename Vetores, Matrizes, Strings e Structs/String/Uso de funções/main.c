#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Demonstra��o da utiliza��o de algumas fun��es */

int main() {
	char nome[80], sobrenome[80];
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu sobrenome: ");
	gets(sobrenome);
	strcat(nome, sobrenome);   // Essa fun��o concatena duas strings
	printf("Apos concatenar as duas strings temos que nome e: %s\n", nome);
	strupr(nome);    // Fun��o que mostra em maiusculo
	printf("O nome em maiusculo e: %s\n", nome);
	strlwr(nome);    // Fun��o que mostra em min�sculo
	printf("O nome em minusculo e: %s\n", nome);
	return 0;
}

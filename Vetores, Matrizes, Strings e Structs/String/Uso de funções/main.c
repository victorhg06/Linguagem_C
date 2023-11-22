#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Demonstração da utilização de algumas funções */

int main() {
	char nome[80], sobrenome[80];
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu sobrenome: ");
	gets(sobrenome);
	strcat(nome, sobrenome);   // Essa função concatena duas strings
	printf("Apos concatenar as duas strings temos que nome e: %s\n", nome);
	strupr(nome);    // Função que mostra em maiusculo
	printf("O nome em maiusculo e: %s\n", nome);
	strlwr(nome);    // Função que mostra em minúsculo
	printf("O nome em minusculo e: %s\n", nome);
	return 0;
}

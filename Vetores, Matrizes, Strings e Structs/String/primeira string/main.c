#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Necessário incluir essa biblioteca para poder atribuir valores a string

/* Leitura de string e exibir o comprimento dela */

int main() {
	char nome[80];
	int tamanho;
	printf("Digite seu nome completo: ");
	gets(nome);           // Utilizar o gets() pois diferencia espaço
	tamanho=strlen(nome); // Função "strlen" que retorna o tamanho da string, ela conta os espaços também
	printf("O comprimento do nome e: %d\n", tamanho);
	return 0;
}

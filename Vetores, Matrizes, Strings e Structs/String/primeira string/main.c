#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Necess�rio incluir essa biblioteca para poder atribuir valores a string

/* Leitura de string e exibir o comprimento dela */

int main() {
	char nome[80];
	int tamanho;
	printf("Digite seu nome completo: ");
	gets(nome);           // Utilizar o gets() pois diferencia espa�o
	tamanho=strlen(nome); // Fun��o "strlen" que retorna o tamanho da string, ela conta os espa�os tamb�m
	printf("O comprimento do nome e: %d\n", tamanho);
	return 0;
}

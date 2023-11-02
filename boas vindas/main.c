#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[20];
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Bem vindo a disciplina de Linguagem C %s", nome);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Elaborar um programa que leia nome, idade e altura de um usu�rio e exiba seu nome,idade,altura e ano de nascimento */

int main(int argc, char *argv[]) {
	/* Vamos declarar as vari�veis*/
	int idade,ano;
	float altura;
	char nome[30];
	/*Entrada de dados*/
	printf("Digite seu nome: ");
	scanf("%s", nome); //Vai fazer a leitura do nome e reservar nessa vari�vel, o %s separa a vari�vel de uso string, A vari�vel estilo caractere n�o necessita do "&" antes
	printf("Digite a idade: ");
	scanf("%d", &idade); //Vai fazer a leitura da idade e o %d diz que � uma vari�vel inteira, Interessante notar o uso do "&" antes da vari�vel
	printf("Digite a altura: ");
	scanf("%f", &altura);// Leitura da vari�vel altura como um float %f, Interessante notar o uso do "&" antes da vari�vel
	/* Processamento, c�lculo do ano de nascimento*/
	ano=2023 - idade; // Aqui a vari�vel ano vai processar que o ano atual menos a idade � o ano de nascimento
	/*Sa�da de dados*/
	printf("\nO nome e: %s", nome);// Conforme aprendido, devo dizer qual � o tipo da vari�vel que ser� mostrada na tela. Nesse caso %s que � uma leitura de string
	printf("\nA altura e: %.2f", altura); //%f indica que o tipo de vari�vel � a float
	printf("\nA idade e: %d", idade); // %d indica que a vari�vel � do tipo inteiro
	printf("\nO ano de nascimento e: %d", ano);
		return 0;
}
// Na linha 28 eu usei "%.2f" isso fez com que eu limitasse o tanto de casas decimais em 2 

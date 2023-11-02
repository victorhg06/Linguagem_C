#include <stdio.h>
#include <stdlib.h>

/* Elaborar um programa que leia nome, idade e altura de um usuário e exiba seu nome,idade,altura e ano de nascimento */

int main(int argc, char *argv[]) {
	/* Vamos declarar as variáveis*/
	int idade,ano;
	float altura;
	char nome[30];
	/*Entrada de dados*/
	printf("Digite seu nome: ");
	scanf("%s", nome); //Vai fazer a leitura do nome e reservar nessa variável, o %s separa a variável de uso string, A variável estilo caractere não necessita do "&" antes
	printf("Digite a idade: ");
	scanf("%d", &idade); //Vai fazer a leitura da idade e o %d diz que é uma variável inteira, Interessante notar o uso do "&" antes da variável
	printf("Digite a altura: ");
	scanf("%f", &altura);// Leitura da variável altura como um float %f, Interessante notar o uso do "&" antes da variável
	/* Processamento, cálculo do ano de nascimento*/
	ano=2023 - idade; // Aqui a variável ano vai processar que o ano atual menos a idade é o ano de nascimento
	/*Saída de dados*/
	printf("\nO nome e: %s", nome);// Conforme aprendido, devo dizer qual é o tipo da variável que será mostrada na tela. Nesse caso %s que é uma leitura de string
	printf("\nA altura e: %.2f", altura); //%f indica que o tipo de variável é a float
	printf("\nA idade e: %d", idade); // %d indica que a variável é do tipo inteiro
	printf("\nO ano de nascimento e: %d", ano);
		return 0;
}
// Na linha 28 eu usei "%.2f" isso fez com que eu limitasse o tanto de casas decimais em 2 

#include <stdio.h>
#include <stdlib.h>

/* Elaborar um programa que leia nome e idade e informe o valor do plano de saúde de uma pessoa */

int main(int argc, char *argv[]) {
	char nome[50];
	int idade;
	printf("Plano de Saude Nossa Familia\n");
	printf("-------------------------------\n");
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	switch(idade){
		case 0 ... 18:  // Repare que para fazer um intervalo de case para verificar valores eu usei "3 pontos" Essa é am forma correta
			printf("A mensalidade de %s com %d de idade sera de R$50", nome, idade);   
			break;	
		case 19 ... 29:  // Repare que para fazer um intervalo de case para verificar valores eu usei "3 pontos" Essa é am forma correta
			printf("A mensalidade de %s com %d de idade sera de R$70", nome, idade);
			break;		
		case 30 ... 45:  // Repare que para fazer um intervalo de case para verificar valores eu usei "3 pontos" Essa é am forma correta
			printf("A mensalidade de %s com %d de idade sera de R$90", nome, idade);
			break;	
		case 46 ... 65:  // Repare que para fazer um intervalo de case para verificar valores eu usei "3 pontos" Essa é am forma correta
			printf("A mensalidade de %s com %d de idade sera de R$130", nome, idade);
			break;	
		default:
			printf("A mensalidade de %s com %d de idade sera de R$170", nome, idade);
			break;						
	} 
	return 0;
}

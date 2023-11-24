#include <stdio.h>
#include <stdlib.h>

/* Básico de uma struct de cadastro de um produto */

struct produto{                 // Declarar a struct fora do main do programa
	int codigo;                 // Aqui declaro os tipos de dados e seus campos
	char descricao[50];
	float preco;
	int saldo;
};

int main() {         // Após declarado a struct, iniciar declarando uma variável
	struct produto ficha;  // Criada a variável "ficha" para a struct
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &ficha.codigo);  // Lembrar sempre do caractere "ponto" entre a variável "ficha" e o que ela vai chamar
	printf("Digite a descricao do produto: ");   // Não esquecer do "&"
	scanf("%s", ficha.descricao);
	printf("Digite o preco do produto: ");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do produto: ");
	scanf("%d", &ficha.saldo);
	
	printf("Codigo: %d\n", ficha.codigo);
	printf("Descricao: %s\n", ficha.descricao);
	printf("Preco: %2.f\n", ficha.preco);
	printf("Saldo: %d\n", ficha.saldo);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* B�sico de uma struct de cadastro de um produto */

struct produto{                 // Declarar a struct fora do main do programa
	int codigo;                 // Aqui declaro os tipos de dados e seus campos
	char descricao[50];
	float preco;
	int saldo;
};

int main() {         // Ap�s declarado a struct, iniciar declarando uma vari�vel
	struct produto ficha;  // Criada a vari�vel "ficha" para a struct
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &ficha.codigo);  // Lembrar sempre do caractere "ponto" entre a vari�vel "ficha" e o que ela vai chamar
	printf("Digite a descricao do produto: ");   // N�o esquecer do "&"
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

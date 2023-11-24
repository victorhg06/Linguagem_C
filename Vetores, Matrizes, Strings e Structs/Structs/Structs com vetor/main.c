#include <stdio.h>
#include <stdlib.h>

/* Utilização de Vetor em uma struct */
struct produto{
	int codigo;
	char descricao[50];
	float preco;
	int saldo;
};
void limparTela() {
    printf("\033[H\033[J"); // Código ANSI para limpar a tela
};

int main() {
	struct produto ficha[10];  // Aqui eu declarei um vetor da variável ficha com 10 posições
	int i;  // Declarando uma variável para contagem
	
	for (i=0; i<10; i++){    // Criando uma estrutura de repetição for para que os vetores sejam preenchidos
		printf("Digite o codigo do produto: ");
		scanf("%d", &ficha[i].codigo);  // Reparar no "&ficha[i]" a variável "i" logo após "ficha"
		printf("Digite a descricao do produto: ");
		scanf("%s", ficha[i].descricao);
		printf("Digite o preco do produto: ");
		scanf("%f", &ficha[i].preco);
		printf("Digite o saldo do produto: ");
		scanf("%d", &ficha[i].saldo);
		limparTela();  // Limpando a tela
	}
	
	for (i=0; i<10; i++){
		printf("\n PRODUTO %d\n", i++);
		printf("CODIGO: %d\n", ficha[i].codigo);
		printf("DESCRICAO: %s\n", ficha[i].descricao);
		printf("PRECO: %2.f\n", ficha[i].preco);
		printf("SALDO: %d\n", ficha[i].saldo);
	}
	
	
	return 0;
}

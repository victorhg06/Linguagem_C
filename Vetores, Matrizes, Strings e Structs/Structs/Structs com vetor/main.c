#include <stdio.h>
#include <stdlib.h>

/* Utiliza��o de Vetor em uma struct */
struct produto{
	int codigo;
	char descricao[50];
	float preco;
	int saldo;
};
void limparTela() {
    printf("\033[H\033[J"); // C�digo ANSI para limpar a tela
};

int main() {
	struct produto ficha[10];  // Aqui eu declarei um vetor da vari�vel ficha com 10 posi��es
	int i;  // Declarando uma vari�vel para contagem
	
	for (i=0; i<10; i++){    // Criando uma estrutura de repeti��o for para que os vetores sejam preenchidos
		printf("Digite o codigo do produto: ");
		scanf("%d", &ficha[i].codigo);  // Reparar no "&ficha[i]" a vari�vel "i" logo ap�s "ficha"
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

#include <stdio.h>
#include <stdlib.h>

//Serve para alocar somente o necessario de memoria
//O programa requisita memoria adicional durante a execuçao
// Função Malloc = memory allocation. Esta função retorna um ponteiro
// "sizeof calcula a quantidade de memoria necessaria para o retorno na funçao malloc
// Usa a estretura "if" para verificar se foi alocado o espaço corretamente

int main(int argc, char *argv[]) {
	int  *x; //Declare a variavel que precisa ser um ponteiro
	
	x = malloc(sizeof(int));
	
	if(x != NULL){   //Se o "x" for diferente de NULL ele faz o que deve ser feito
	
		printf("Memoria alocada com sucesso\n");
		
		printf("x = %d\n", *x); // Testando para ver o valor que dara na tela
		// No caso como nao fooi nada alocado ainda, vai resultar em lixo
		
		*x = 50; //Estou alterando o conteudo apontado por x
		printf("x = %d\n", *x);
	}
	else { //Senão vai dar erro
	
		printf("ERRO AO ALOCAR MEMORIA\n");
	}
	
	return 0;
}

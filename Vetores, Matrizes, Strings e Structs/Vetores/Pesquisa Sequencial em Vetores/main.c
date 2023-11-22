#include <stdio.h>
#include <stdlib.h>

/* Realizar uma pesquisa sequencial em um vetor */

int main() {
	int vetorA[5]={1,2,3,4,5};
	int i, acha, busca;
	printf("Digite o elemento que deseja buscar: ");
	scanf("%d", &busca);
	i=0;   // Declaro "i" e "acha" valendo 0 porque senão eles valerão automaticamente 1 e nos vetores eles precisam começar em 0
	acha=0;
	while ((acha==0) && (i<5)){
		if (vetorA[i]==busca){
			acha=1;
		}
		else{
			i++;
		}
	}
	if (acha==1){
		printf("O elemento %d foi encontrado na posicao %d", busca, i);
	}else{
		printf("O elemento não foi encontrado.");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define tamanho 3
int main(int argc, char *argv[]) {
	struct tipo_pilha {
	int dados[tamanho];
	int ini;
	int topo;
};
	struct tipo_pilha pilha;
	void empilha(int elemento){
		if (pilha.topo == tamanho){
			printf ("Fila cheia. \n");
			system ("pause");
		}
		else{
			pilha.dados[pilha.topo] = elemento;
			pilha.topo++;
		}
	}
	
	
	return 0;
}

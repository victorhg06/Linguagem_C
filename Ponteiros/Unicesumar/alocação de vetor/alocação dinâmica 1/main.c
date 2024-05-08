#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *p;  // Declara um ponteiro de inteiros
	p = (int *) malloc(4);  // Função para alocar um espaço dinamicamente   O valor 4 é pq um inteiro em memória precisa de 4 bytes
	if (p == NULL){
		printf("Erro ! \n");
	}
	else {
		*p = 10;
		printf("p: %d\n", *p);
		free(p);  // Importante desalocar memória com a função free
	}
	
	return 0;
}

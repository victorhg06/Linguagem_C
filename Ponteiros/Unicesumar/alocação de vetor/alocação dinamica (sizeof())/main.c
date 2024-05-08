#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *p;  // Declara um ponteiro de inteiros
	p = (int *) malloc(sizeof(int));  // Nesse caso declaramos a função sizeoff quando não sabemos o tamanho 
	if (p == NULL){
		printf("Erro ! \n");
	}
	else {
		*p = 10;
		printf("p: %d\n", *p);
		free(p);  // Importante desalocar memï¿½ria com a funï¿½ï¿½o free
	}
	return 0;
}

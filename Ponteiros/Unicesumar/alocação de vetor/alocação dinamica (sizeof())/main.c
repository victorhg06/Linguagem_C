#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *p;  // Declara um ponteiro de inteiros
	p = (int *) malloc(sizeof(int));  // Nesse caso declaramos a fun��o sizeoff quando n�o sabemos o tamanho 
	if (p == NULL){
		printf("Erro ! \n");
	}
	else {
		*p = 10;
		printf("p: %d\n", *p);
		free(p);  // Importante desalocar mem�ria com a fun��o free
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *p;  // Declara um ponteiro de inteiros
	p = (int *) malloc(4);  // Fun��o para alocar um espa�o dinamicamente   O valor 4 � pq um inteiro em mem�ria precisa de 4 bytes
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

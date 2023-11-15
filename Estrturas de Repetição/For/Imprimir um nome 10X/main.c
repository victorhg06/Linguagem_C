#include <stdio.h>
#include <stdlib.h>


int main() {
	char nome[30];
	int cont;
	printf("Informe o nome: \n");
	scanf("%s", nome);
	for(cont=1; cont<10; cont++){
		printf("\n %s", nome);
	}
	return 0;
}

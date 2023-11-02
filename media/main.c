#include <stdio.h>
#include <stdlib.h>

/* receber 4 notas e calcular a média delas */

int main(int argc, char *argv[]) {
	float n1,n2,n3,n4,media;
	printf("Digite a Nota 1: ");
	scanf("%f", &n1);
	printf("Digite a Nota 2: ");
	scanf("%f", &n2);
	printf("Digite a Nota 3: ");
	scanf("%f", &n3);
	printf("Digite a Nota 4: ");
	scanf("%f", &n4);
	
	media=(n1+n2+n3+n4)/4;
	
	printf("A media do aluno e: %.2f", media); //Repare na utilização do limitador de casas decimais "%.2f" que limitou em 2 casas decimais
	
	return 0;
}

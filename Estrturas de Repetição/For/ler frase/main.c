#include <stdio.h>
#include <stdlib.h>

/* Ler uma frase e repetí-la */

int main() {
	int i, num;
	char frase[100];  // Atentar para sempre em uma string especificar uma quantidade de caracteres
	printf("Digite uma frase: ");
	scanf("%s", frase);
	printf("Quantas vezes deseja repeti-la?: ");
	scanf("%d", &num);
	for (i=1; i<=num; i++){
		printf("%s\n", frase);
	}
	return 0;
}

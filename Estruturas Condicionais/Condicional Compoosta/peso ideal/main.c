#include <stdio.h>
#include <stdlib.h>

/* Peso ideal de uma pessoa */

int main(int argc, char *argv[]) {
	float altura, peso;        
	char sexo;
	printf("Digite seu sexo (M/F): ");
	scanf("%c", &sexo);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	if ((sexo=='M')||(sexo=='m')){
		peso=(72.7 * altura) - 58;
	}
	else{
		peso=(62.1 * altura) - 44.7;
	}
	printf("O sexo e: %c\n", sexo);
	printf("A altura e: %2.f\n", altura);
	printf("O peso iddeal e: %2.f\n", peso);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Converter quilo para libras */

float convertpeso(float peso){
	float libras;
	libras=peso*2.2046;
	return libras;
}

int main(int argc, char *argv[]) {
	
	float quilo, resposta;
	
	printf("Digite seu peso em quilos: ");
	scanf("%f", &quilo);
	
	resposta=convertpeso(quilo);
	
	printf("O peso em Libras e igual a: %.3f", resposta);
	
	return 0;
}

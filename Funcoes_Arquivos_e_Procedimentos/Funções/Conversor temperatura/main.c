#include <stdio.h>
#include <stdlib.h>

/* Converter de Celsius para Gahrenheit */

float converttemp(float temp){
	float graus;
	graus=(temp*1.8)+32;
	return graus;
}

int main(int argc, char *argv[]) {
	float cels, resposta;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &cels);
	system("pause");
	
	resposta=converttemp(cels);
	
	printf("A temperatura em Fahrenheit e: %.2f", resposta);
	return 0;
}

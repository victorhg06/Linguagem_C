#include <stdio.h>
#include <stdlib.h>

/* Criar uma fun��o que converta kg em gramas */

float convertepeso(float quilos)  // <Tipo de retorno> <Nome da Fun��o> (<Parametros>)
{
	float gramas;    // Declarei uma vari�vel local do tipo float
	gramas=quilos * 1000;  // Aqui � a l�gica da minha fun��o
	return gramas;   // Aqui � o que ser� retornado
}

int main() {
	float qui, gra;     // Vari�veis globais
	printf("Digite o peso em kilos: \n");
	scanf("%f", &qui);
	gra = convertepeso(qui);  // A vari�vel gra vai receber o valor da fun��o que estamos chamando aqui
	printf("O peso e de %1.f gramas. \n", gra);
	
	return 0;
}

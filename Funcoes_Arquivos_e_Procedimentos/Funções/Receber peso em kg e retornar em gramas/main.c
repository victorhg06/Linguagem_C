#include <stdio.h>
#include <stdlib.h>

/* Criar uma função que converta kg em gramas */

float convertepeso(float quilos)  // <Tipo de retorno> <Nome da Função> (<Parametros>)
{
	float gramas;    // Declarei uma variável local do tipo float
	gramas=quilos * 1000;  // Aqui é a lógica da minha função
	return gramas;   // Aqui é o que será retornado
}

int main() {
	float qui, gra;     // Variáveis globais
	printf("Digite o peso em kilos: \n");
	scanf("%f", &qui);
	gra = convertepeso(qui);  // A variável gra vai receber o valor da função que estamos chamando aqui
	printf("O peso e de %1.f gramas. \n", gra);
	
	return 0;
}

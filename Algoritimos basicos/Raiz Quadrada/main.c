#include <stdio.h>
#include <stdlib.h> 
#include <math.h> // Devo incluir essa biblioteca matemática que é onde fica algumas funções intrínsicas matemáticas

int main() {
	float A = 4, resultado; // Aqui declarei as variáveis como float (números reais sem precisão)
	resultado = sqrt(A);    // Aqui chamei a função intrínsica da raiz quadrada
		printf("A raiz quadrada é: %f/ ", resultado); // O caractere " %f " é necessário para imprimir valores, ainda não aprendi sobre //
	return 0;
}

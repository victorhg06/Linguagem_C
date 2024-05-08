#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Biblioteca de matematica

// A função pow() em C é usada para calcular uma potência de um número.
//Ela está definida na biblioteca padrão <math.h>. A palavra "pow" é uma abreviação de "power" (potência em inglês).
// Sua assinatuera é: double pow(double base, double exponent);


int main(int argc, char *argv[]) {
	int i, tam, *vet;
	
	printf("Digite o tamanho do vetor: "); //Precisamos saber o tamanho do vetor
	scanf("%d", &tam); // A var tam recebe o valor digitado
	
	vet = malloc(tam * sizeof(int)); //É necessario multiplicar tamanho do vetor pela qtd de bytes
	
	if(vet != NULL){
		for (i = 0; i < tam; i++){
				vet[i] = pow(2,i); // base 2 elevada ao valor de i
				printf("Posicao %d: %d\n", i, vet[i]);
			}		
	}
	else{
		printf("Erro ao alocar memória! \n");

	}
	
	return 0;
}

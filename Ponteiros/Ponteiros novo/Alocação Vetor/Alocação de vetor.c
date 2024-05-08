#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Biblioteca de matematica

// A fun��o pow() em C � usada para calcular uma pot�ncia de um n�mero.
//Ela est� definida na biblioteca padr�o <math.h>. A palavra "pow" � uma abrevia��o de "power" (pot�ncia em ingl�s).
// Sua assinatuera �: double pow(double base, double exponent);


int main(int argc, char *argv[]) {
	int i, tam, *vet;
	
	printf("Digite o tamanho do vetor: "); //Precisamos saber o tamanho do vetor
	scanf("%d", &tam); // A var tam recebe o valor digitado
	
	vet = malloc(tam * sizeof(int)); //� necessario multiplicar tamanho do vetor pela qtd de bytes
	
	if(vet != NULL){
		for (i = 0; i < tam; i++){
				vet[i] = pow(2,i); // base 2 elevada ao valor de i
				printf("Posicao %d: %d\n", i, vet[i]);
			}		
	}
	else{
		printf("Erro ao alocar mem�ria! \n");

	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
# define TAM 5
/* Ler dois vetores, concatenar eles e ordenar */

int main() {
	int vetA[TAM], vetB[TAM], vetC[TAM];
	int i, j, troca ;
	
	for (i=0;i<TAM;i++){
		printf("Digite o %d valor de A: ", i+1);
		scanf("%d", &vetA[i]);
		printf("Digite o %d valor de B: ", i+1);
		scanf("%d", &vetB[i]);
		vetC[i]= vetA[i] + vetB[i];
	}
	// Vamos executar o Bubblesort
	for (i=0;i<TAM-1;i++){  // Começamos o bubblesort inciando na primeira posição "0" e ido até a penúltima "TAM-1"
		for(j=i+1;j<TAM;j++){  // A segunda variável contadora incia na segunda posição "i+1" e vai até a última para que se possa comparar
			if(vetC[i] > vetC[j]){ // Se um for maior que o outro
				troca=vetC[i]; // Caso seja maior, a variável "troca" recebe o valor de "i"
				vetC[i]=vetC[j]; //O valor de "i" que está zerado recebe o valor menor que está em "j"
				vetC[j]=troca; // Agora o valor zerado que está em "j" recebe o valor maior que estava em "troca"
				            // Feita a primeira comparação, o algoritimo ordena o vetor e parte para a próxima comparação
			}
		}
	}
	for(i=0;i<TAM;i++){
		printf("%d\n", vetC[i]);
	}
	
	return 0;
}

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
	for (i=0;i<TAM-1;i++){  // Come�amos o bubblesort inciando na primeira posi��o "0" e ido at� a pen�ltima "TAM-1"
		for(j=i+1;j<TAM;j++){  // A segunda vari�vel contadora incia na segunda posi��o "i+1" e vai at� a �ltima para que se possa comparar
			if(vetC[i] > vetC[j]){ // Se um for maior que o outro
				troca=vetC[i]; // Caso seja maior, a vari�vel "troca" recebe o valor de "i"
				vetC[i]=vetC[j]; //O valor de "i" que est� zerado recebe o valor menor que est� em "j"
				vetC[j]=troca; // Agora o valor zerado que est� em "j" recebe o valor maior que estava em "troca"
				            // Feita a primeira compara��o, o algoritimo ordena o vetor e parte para a pr�xima compara��o
			}
		}
	}
	for(i=0;i<TAM;i++){
		printf("%d\n", vetC[i]);
	}
	
	return 0;
}

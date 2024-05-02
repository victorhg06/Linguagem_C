#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para que eu possa colocar acentos nos meus caracteres
#define TAM 10  // Aqui defini uma constante de tamanho 10 para usar no meu vetor
/* Ordenação de Vetores com o lgoritimo Bubblesort */

int main() {
	setlocale(LC_ALL, ""); // Config para aplicar a biblioteca
	int numeros[TAM];
	int i, aux, contador;  // Variáveis necessárias para a aplicação do bubblesort
	printf("Entre com dez números para preencher o array e pressione enter após preencher cada um dos números: \n");
	for (i=0; i<TAM; i++){
		scanf("%d", &numeros[i]);
	}
	printf("Ordem atual dos itens no array:\n ");
	for (i=0; i<TAM; i++){
		printf("%1d", numeros[i]);
	}
	
	
	// Agora vamos demonstrar o algoritimo bublesort:
	for (contador=1; contador<TAM; contador++){ // A variável contador é só para contar
		for(i=0; i<TAM - 1; i++){ // " i " deve ir até TAM - 1 porque é a penúltima posição, pois não precisamos comparar a última posição com ninguém
			if(numeros[i]>numeros[i+1]){ // Se o número da vez, for maior que o próximo número, faremos uma troca
				aux=numeros[i]; // A variável "aux" vai receber o número que está sendo comparado
				numeros[i] = numeros[i+1]; // Se numeros[i] for maior, ele vai receber o valor que está em numeros [i+1]
				numeros[i+1]=aux;   // Vira um algoritimo de troca
			}
		}
	}
	printf("\nElementos do array em ordem crescente \n"); // Agora serão exibidos os elementos ordenados
	for (i=0; i<TAM; i++){
		printf("%4d", numeros[i]);
	}
	printf("\n");
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para que eu possa colocar acentos nos meus caracteres
#define TAM 10  // Aqui defini uma constante de tamanho 10 para usar no meu vetor
/* Ordena��o de Vetores com o lgoritimo Bubblesort */

int main() {
	setlocale(LC_ALL, ""); // Config para aplicar a biblioteca
	int numeros[TAM];
	int i, aux, contador;  // Vari�veis necess�rias para a aplica��o do bubblesort
	printf("Entre com dez n�meros para preencher o array e pressione enter ap�s preencher cada um dos n�meros: \n");
	for (i=0; i<TAM; i++){
		scanf("%d", &numeros[i]);
	}
	printf("Ordem atual dos itens no array:\n ");
	for (i=0; i<TAM; i++){
		printf("%1d", numeros[i]);
	}
	
	
	// Agora vamos demonstrar o algoritimo bublesort:
	for (contador=1; contador<TAM; contador++){ // A vari�vel contador � s� para contar
		for(i=0; i<TAM - 1; i++){ // " i " deve ir at� TAM - 1 porque � a pen�ltima posi��o, pois n�o precisamos comparar a �ltima posi��o com ningu�m
			if(numeros[i]>numeros[i+1]){ // Se o n�mero da vez, for maior que o pr�ximo n�mero, faremos uma troca
				aux=numeros[i]; // A vari�vel "aux" vai receber o n�mero que est� sendo comparado
				numeros[i] = numeros[i+1]; // Se numeros[i] for maior, ele vai receber o valor que est� em numeros [i+1]
				numeros[i+1]=aux;   // Vira um algoritimo de troca
			}
		}
	}
	printf("\nElementos do array em ordem crescente \n"); // Agora ser�o exibidos os elementos ordenados
	for (i=0; i<TAM; i++){
		printf("%4d", numeros[i]);
	}
	printf("\n");
	
	
	return 0;
}

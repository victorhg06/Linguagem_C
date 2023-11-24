#include <stdio.h>
#include <stdlib.h>

/* Imprimir uma matriz na tela */

int main() {
	int A[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};  // Declaração da matriz 3X3 e uma atribuição de seus números, ATENÇÃO AOS DETALHES DE COLCHETES E VÍRGULAS
	int i,j;          // Declaração das variáveis das linhas e das colunas
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", A[i][j]);
		} printf("\n");
	} 
	return 0;
}

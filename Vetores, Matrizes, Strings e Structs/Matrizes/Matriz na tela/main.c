#include <stdio.h>
#include <stdlib.h>

/* Imprimir uma matriz na tela */

int main() {
	int A[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};  // Declara��o da matriz 3X3 e uma atribui��o de seus n�meros, ATEN��O AOS DETALHES DE COLCHETES E V�RGULAS
	int i,j;          // Declara��o das vari�veis das linhas e das colunas
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", A[i][j]);
		} printf("\n");
	} 
	return 0;
}

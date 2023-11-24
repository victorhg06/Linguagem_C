#include <stdio.h>
#include <stdlib.h>

/* Mostrar matriz de 2L e 10C */

int main() {
	int matA[2][10];
	int i, j;
	for (i=0;i<2;i++){
		for (j=0;j<10;j++){
			printf("Insira o elemento da linha %d, coluna %d", i,j);
			scanf("%d", &matA[i][j]);
		}
	}
	for (i=0;i<2;i++){
		for (j=0;j<10;j++){
			printf("O elemento da linha %d, coluna %d e: %d\n", i,j,matA[i][j]);
		}
	}
	return 0;
}

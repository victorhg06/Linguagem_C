#include <stdio.h>
#include <stdlib.h>

/* Soma de números ímpares entre 200 e 500 */

int main() {
	int i, impar;
	impar=0;
	for(i=200; i<=500; i++){
		if (i%2!=0){
			impar=impar+i;
		}	
	}
	printf("A soma de todos os numeros impares e igual a: %d", impar);
	return 0;
}

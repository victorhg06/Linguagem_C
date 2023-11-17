#include <stdio.h>
#include <stdlib.h>

/* Elaborar um programa que leia a tabuada de um número */

int main() {
	int i, num, resp;
	printf("Quer ver a tabuada de qual valor: ");
	scanf("%d", &num);
	for (i=1; i<=10; i++){
		resp=i*num;
		printf("%d X %d = %d \n", num, i, resp);
	}
	return 0;
}

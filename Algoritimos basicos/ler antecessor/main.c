#include <stdio.h>
#include <stdlib.h>

/* Ler um antecessor e um sucessor */

int main(int argc, char *argv[]) {
	int num,ant,suc;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	ant=num-1;
	suc=num+1;
	
	printf("\nO numero digitado foi: %d", num);
	printf("\nSeu antecessor e: %d", ant);
	printf("\nSeu sucessor e: %d", suc);
	return 0;
}

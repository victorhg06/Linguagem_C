#include <stdio.h>
#include <stdlib.h>

/* Algoritimo que conte a quantidade de pares e impares digitados usando uma estrutura de repeti��o*/
int main() {
	int num, impar, par;
	par=0;
	impar=0;
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num%2==0){
			par++;     // Isso faz com que a vari�vel receba o incremento de 1
		}
		else{
			impar++;  // Isso faz com que a vari�vel receba o incremento de 1
		}
	} while(num!=0);
	printf("A quantidade de pares digitados foi de: %d\n", par);
	printf("A quantidade de impares digitados foi de: %d", impar);
	return 0;
}

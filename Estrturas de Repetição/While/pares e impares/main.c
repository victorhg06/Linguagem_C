#include <stdio.h>
#include <stdlib.h>

/* Contar a quantidade de n�meros pares e �mpares at� ser digitado zero */

int main() {
	int num, par, impar;
	par=0;   // N�o esquecer de atribuir esses valores �s vari�veis
	impar=0;
	printf("Digite um numero: \n");
	scanf("%d", &num);
	while(num!=0){    // Na estrutura While o teste � feito no come�o
		if (num%2==0){
			par++;  // Lembrar que isso faz com que a vari�vel incremente 1 a mais no seu valor
		}
		else{
			impar++;
		}
		printf("Digite um numero: \n");  // Na estrutura "while" precisei repetir essas declara��es para que o sistema continue
		scanf("%d", &num);
	}
	printf("A quantidade de numeros pares digitados foi de: %d\n",par);
	printf("A quantidade de numeros impares digitados foi de: %d",impar);
	return 0;
}

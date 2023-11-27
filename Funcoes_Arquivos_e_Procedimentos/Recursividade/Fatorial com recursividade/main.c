#include <stdio.h>
#include <stdlib.h>

/* Resolver um fatorial usando recursividade */

int fatorial(int n){
	if (n==0 || n==1){  // Pois o fatorial de 0 e 1 é igual a 1
		return 1;
	}
	else {
		return n*fatorial(n-1);  // Aqui eu estou pedindo que o programa faça o fat de um número anterior, até chegar num resultado conhecido
	}
}  // O programa vai até achar o valor do fat de 1 que é 1 e logo após ele fará o seguinte:
  // 2! * 1!= 2; 3! vezes fat de 2 que é 2= 6; 4! vezes fat de 3 que é 6= 24; 5! vezes fat de 4 que é 24= 120 e assim vai

int main() {
	int num, resposta;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	resposta = fatorial(num);  // Aqui eu estou chamando a função
	printf("O fatorial de %d e: %d", num, resposta);
	
	return 0;
}

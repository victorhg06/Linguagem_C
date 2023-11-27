#include <stdio.h>
#include <stdlib.h>

/* Resolver um fatorial usando recursividade */

int fatorial(int n){
	if (n==0 || n==1){  // Pois o fatorial de 0 e 1 � igual a 1
		return 1;
	}
	else {
		return n*fatorial(n-1);  // Aqui eu estou pedindo que o programa fa�a o fat de um n�mero anterior, at� chegar num resultado conhecido
	}
}  // O programa vai at� achar o valor do fat de 1 que � 1 e logo ap�s ele far� o seguinte:
  // 2! * 1!= 2; 3! vezes fat de 2 que � 2= 6; 4! vezes fat de 3 que � 6= 24; 5! vezes fat de 4 que � 24= 120 e assim vai

int main() {
	int num, resposta;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	resposta = fatorial(num);  // Aqui eu estou chamando a fun��o
	printf("O fatorial de %d e: %d", num, resposta);
	
	return 0;
}

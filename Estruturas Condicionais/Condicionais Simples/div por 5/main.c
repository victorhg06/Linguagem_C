#include <stdio.h>
#include <stdlib.h>

/* Ver se um número é divisível por 5 */

int main(int argc, char *argv[]) {
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num%5==0){
		printf("O numero %d e divisivel por 5", num);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Verificar se é positivo ou negativo */
	int num;  // Variável Global

void verifica(){
	
	if(num%2==0){
		printf("Par");
	}else{
		printf("Impar");
	}
	
}

int main(int argc, char *argv[]) {

	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	verifica();
	
	return 0;
}

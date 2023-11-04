#include <stdio.h>
#include <stdlib.h>

/* Identificar situação eleitoral de uma pessoa */

int main(int argc, char *argv[]) {
	char nome[50];
	int idade;
	printf("SITUACAO ELEITORAL\n");
	printf("------------------\n");
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade<16){
		printf("%s\n", nome);
		printf("%d\n", idade);
		printf("NAO ELEITOR\n");
	}
	else {
		if ((idade>=18) && (idade<=65)){
		printf("%s\n", nome);
		printf("%d\n", idade);
		printf("ELEITOR OBRIGATORIO");	 
		}
		else{              // Repare que para se utilizar o else, eu devo logo colocar um if abaixo, muita atenção às chaves
			if ((idade>=16 && idade<=17)|| (idade>65)){
				printf("%s\n", nome);
				printf("%d\n", idade);
				printf("ELEITOR FACULTATIVO");
			}
		}
	}
		
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* Receber idade e altura e apresentar medias */

int main() {
	int idade, npessoas;
	float altura, somaa, somai;
	somaa=0;
	somai=0;
	npessoas=0;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	while (idade!=0){
		printf("Informe a altura: ");
		scanf("%f", &altura);
		npessoas++;
		somai=somai + idade;
		somaa=somaa + altura;
		printf("Informe a idade: ");
		scanf("%d", &idade);
	}
	if (npessoas>0){
		printf(" A media de idades e de: %2.d", somai/npessoas);
		printf("A media de altura e de: %2.f", somaa/npessoas);
	} else{
		printf("Nenhuma pessoa informada");
	}
	
	return 0;
}

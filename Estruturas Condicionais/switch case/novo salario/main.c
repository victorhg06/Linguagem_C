#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[30];
	float sal, nsal, aumento;
	int codigo;
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Qual e o seu salario atual?: ");
	scanf("%f", &sal);
	printf("Digite o numero relacionado ao seu trabalho atual\n 1-Servente\n 2-Pedreiro\n 3-Mestre de Obras\n 4-Tecnico em Seguranca\n\n\n");
	scanf("%d", &codigo);
	switch(codigo){
		case 1: 
			aumento=sal*0.4;  // Detalhe na utilização do "ponto" no lugar da vírgula
			nsal=sal+aumento;
			printf("%s seu aumento foi de: %3.f\n", nome,aumento);
			printf("Seu novo salario sera de: %3.f", nsal);
		break;	
		case 2: 
			aumento=sal*0.35; // Detalhe na utilização do "ponto" no lugar da vírgula
			nsal=sal+aumento;
			printf("%s seu aumento foi de: %3.f\n", nome,aumento);
			printf("Seu novo salario sera de: %3.f", nsal);
		break;	
		case 3: 
			aumento=sal*0.2;  // Detalhe na utilização do "ponto" no lugar da vírgula
			nsal=sal+aumento;
			printf("%s seu aumento foi de: %3.f\n", nome,aumento);
			printf("Seu novo salario sera de: %3.f", nsal);
		break;
		case 4: 
			aumento=sal*0.1;   // Detalhe na utilização do "ponto" no lugar da vírgula
			nsal=sal+aumento;
			printf("%s seu aumento foi de: %3.f\n", nome,aumento);
			printf("Seu novo salario sera de: %3.f", nsal);
		break;
		default: 
			printf("COMANDO INVALIDO");
		break;			
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Escolher um dia na semana */

int main(int argc, char *argv[]) {
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	switch (num){                       // Importante colocar a vari�vel sobre parenteses
		case 1: printf("DOMINGO\n");
			break;                      //Colocar o break sempe ap�s todos os cases, para impedir a execu��o dos outros comandos
		case 2: printf("Segunda Feira\n");
			break;
		case 3: printf("Terca Feira\n");
			break;
		case 4: printf("Quarta Feira\n");
			break;
		case 5: printf("Quinta Feira\n");
			break;
		case 6: printf("Sexta Feira\n");
			break;
		case 7: printf("Sabado\n");
			break;
		default: printf("Comando Invalido");
			break;																	
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num%2==0){                          //Repare que abri a chave aqui e fechei na linha 12
		printf("Numero Par");
	}
	else{                                  //Após fechar a chave do If, tive que abrir uma chave para o else e fechá-la na linha 15
		printf("Numero Impar");
	}
	return 0;
}

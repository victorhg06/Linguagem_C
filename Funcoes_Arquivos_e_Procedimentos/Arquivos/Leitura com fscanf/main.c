#include <stdio.h>
#include <stdlib.h>

/* Ler o arquivo criado no exercício anterior */

int main(int argc, char *argv[]) {
	FILE *file;
	//Uso o "r", pois quero read o arquivo
	file = fopen("C:\\Users\\Victor\\OneDrive\\Desktop\\leituras.txt", "r"); // coloquei "leituraS" para dar Nulo
	
	// Uso a estrutura IF para me avisar que o arquivo não pode ser aberto, pois ele é nulo
	if (file==NULL){
		printf("Arquivo nao encontrado\n");
		system("pause");  // esse funciona para eu poder assistir o que está acontecendo
		return 0;   // Coloco esse retornar aqui para encerrar o programa
	}
	
	// Possuo no doc leitura um arquivo escrito 3 números inteiros, criei 3 variáveis inteiras para le-los
	int x, y, z;
	
	//Usei a função "fscanf" para escanear aqueles números
	fscanf(file," %d %d %d ", &x, &y, &z); // Informar o ponteiro "file" pro nosso arquivo antes de tudo
	
	// Uso o printf para imprimir na tela o que foi escaneado pelo "fscanf"
	printf("%d %d %d", x, y, z);
	
	// Não esquecer de fechar o arquivo
	fclose(file);
	
	
	return 0;
}

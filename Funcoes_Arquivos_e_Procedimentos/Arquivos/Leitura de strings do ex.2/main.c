#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *file;
	//Uso o "r", pois quero read o arquivo
	file = fopen("C:\\Users\\Victor\\Documents\\arquivo.txt", "r"); 
	
	// Uso a estrutura IF para me avisar que o arquivo não pode ser aberto, pois ele é nulo
	if (file==NULL){
		printf("Arquivo nao encontrado\n");
		system("pause");  // esse funciona para eu poder assistir o que está acontecendo
		return 0;   // Coloco esse retornar aqui para encerrar o programa caso o arquivo seja NULL
	}
	
	char frase[200];  // Criei uma variável para ler o texto do meu arquivo
	
	// Usamos a estrutura de repetição "while" para que o programa leia todos os caracteres até chegar ao último e retornar NULL
	while (fgets(frase, 200, file) != NULL){//A função fgets le strings, deve ser precedida de(variável, tamanho de carac, referencia
		printf("%s", frase); // Vai imprimir na tela todos os caracteres
	}
	
	// Não esquecer de fechar o arquivo
	fclose(file);
	return 0;
}

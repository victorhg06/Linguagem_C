#include <stdio.h>
#include <stdlib.h>

/* Testando a função fwrite para gravar dados em binário */

int main(int argc, char *argv[]) {
	// Criando o ponteiro para o arquivo
	FILE * arq;
	arq = fopen("binario.bin", "wb");  // Usa "wb" para write binary
	
	// Criando os vetores
	char ch[15]= "Teste Geral";
	int valor[15] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	
	//Testar a abertura do arquivo
	if (arq==NULL){
		printf("Arquivo nao encontrado");
		system("pause");
		return 0;
	}
	
	// Gravando os dados no arquivo usando fwrite
	//Sintaxe: fwrite(&variavel, numero_de_bytes, num_registros, nome_do_arquivo);
	fwrite(ch, sizeof(char), 15, arq); // sizeof= é usado para determinar o tamanho, em bytes, de um tipo de dado ou de uma variável
	fwrite(valor, sizeof(int), 15, arq);
	
	//Fechando o arquivo
	fclose(arq);
	
	//Foi criado o arquivo "binario.bin" e está na pasta deste exercício.
	
	return 0;
}

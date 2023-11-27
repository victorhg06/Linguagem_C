#include <stdio.h>
#include <stdlib.h>

/* Criar um arquivo em C */

int main(int argc, char *argv[]) // � IMPORTANTE DEIXAR O QUE EST� ESCRITO ENTRE AS ABAS
 {
	FILE*file; // Declara��o do ponteiro do arquivo	
	
	file=fopen("C:\\Users\\Victor\\Documents\\arquivo.txt", "w"); // Abrir o arquivo �para escrita usa-se o modo "w"
	// Usar duas "\\", pois s� assim vai compilar corretamente
	// "C:\\Users\\Victor\\Documents\\arquivo.txt" � o caminho onde foi criado o arquivo
	// Caso eu queira criar o arquivo na pasta do main, devo apenas deixar como "aruivo.txt"
	
	// Para escrever no arquivo 
	fprintf(file, "Teste de escrita no arquivo"); // "fprintf" � usado para escrever no arquivo
	// Devo direcionar o ponteiro para a vari�vel "file" seguida de uma v�rgula
	
	//Para fechar e salvar o que foi escrito no arquivo
	fclose(file); // Usado para salvar o arquivo de uma maneiro segura
	
	return 0;
}

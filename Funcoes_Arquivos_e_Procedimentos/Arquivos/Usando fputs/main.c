#include <stdio.h>
#include <stdlib.h>

/* Anexar algo a um arquivo */

int main(int argc, char *argv[]) {
	
	FILE*file;
	file = fopen("C:\\Users\\Victor\\Documents\\arquivo.txt", "a"); // Utiliza a letra "a" para anexar 
	
	if (file==NULL){
		printf("Arquivo nao encontrado");
		return 0;
	} 
	
	fprintf(file, "\nPrimeira linha\n"); // Este texto será anexado ao arquivo
	
	char frase[]= "\nSegunda Linha"; // Crio um char
	fputs(frase, file); //Função fputs recebe a variável e o ponteiro
	
	fclose(file);
	
	
	return 0;
}

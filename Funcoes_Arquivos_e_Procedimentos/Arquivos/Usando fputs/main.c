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
	
	fprintf(file, "\nPrimeira linha\n"); // Este texto ser� anexado ao arquivo
	
	char frase[]= "\nSegunda Linha"; // Crio um char
	fputs(frase, file); //Fun��o fputs recebe a vari�vel e o ponteiro
	
	fclose(file);
	
	
	return 0;
}

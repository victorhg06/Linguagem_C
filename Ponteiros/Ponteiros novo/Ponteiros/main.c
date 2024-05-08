#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int var = 15;  // Declarei uma variavel para ve-la como se comporta
	int *ptr;   // Essa � a forma para declarar um ponteiro em C
	ptr = &var;  // O conte�do da variavel ptr � o endere�o da variavel var
	
	printf ("Conteudo de var = %d\n", var);  // Aqui estou vendo o valor dela
	printf ("Endereco de var = %p\n", &var);       // Aqui eu consigo ver o endere�o dela  
	printf("Conteudo apontado por ptr e = %d\n", *ptr); //Ao colocar "*" eu estou querendo o valor do conteudo da variavel que o ponteiro esta apontando
	printf("Endereco apontado por ptr = %p\n", ptr);// "ptr" o endere�o de "var"
	printf("Endereco do ptr = %p\n", &ptr); //Aqui estou vendo o endere�o do meu ponteiro
	
	*ptr = 73; //Estou usando o ponteiro para alterar o conteudo da variavel apontada pelo ponteiro, no caso "var"
	// Agora a partir daqui o valor de "var" sera "73"
	// Os endere�os continuam os mesmos
	
	printf("\n\n");
	printf ("Conteudo de var = %d\n", var);  
	printf ("Endereco de var = %p\n", &var);       
	printf("Conteudo apontado por ptr e = %d\n", *ptr); 
	printf("Endereco apontado por ptr = %p\n", ptr);
	printf("Endereco do ptr = %p\n", &ptr); 
	
	
	
	return 0;
}

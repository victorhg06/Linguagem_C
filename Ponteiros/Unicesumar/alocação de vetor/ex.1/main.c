#include <stdio.h>
#include <stdlib.h>
	int *p;   // Criei o ponteiro p
	int x;    // Criei a vari�vel x

int main(int argc, char *argv[]) {
	x = 10; //O endere�o que armazena x recebeu o valor 10
	p = &x; // p recebe o endere�o de x
	*p =30; // Isso faz que o conte�do da vari�vel x seja alterado para o valor digitado
	
	
	
	
	
	return 0;
}

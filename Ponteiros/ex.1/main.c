#include <stdio.h>
#include <stdlib.h>
	int *p;   // Criei o ponteiro p
	int x;    // Criei a variável x

int main(int argc, char *argv[]) {
	x = 10; //O endereço que armazena x recebeu o valor 10
	p = &x; // p recebe o endereço de x
	*p =30; // Isso faz que o conteúdo da variável x seja alterado para o valor digitado
	
	
	
	
	
	return 0;
}

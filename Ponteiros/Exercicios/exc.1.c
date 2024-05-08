#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int var, *p;
	
	p= malloc(sizeof(int));
	
	*p = 42;
	
	printf("O endereco de p e: %p\n", &p);
	printf("Seu valor e: %d\n", *p);
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi;

void imprimir(){
	printf("Valor de xi = %d \n", xi);
	printf("Valor de &xi = %p \n", &xi);
	printf("Valor de ptr_xi %p \n", ptr_xi);
	printf("Valor de *ptr_xi = % \n", *ptr_xi);
}

int main(int argc, char *argv[]) {
	xi = 10;
	ptr_xi = &xi;
	imprimir();
	
	
	system ("Pause");
	return (0);
}

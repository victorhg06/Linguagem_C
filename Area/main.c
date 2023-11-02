#include <stdio.h>
#include <stdlib.h>

/* calcular a área de um trapézio */

int main(int argc, char *argv[]) {
	int baseg, basep, alt;
	float area;
	
	printf("Digite o valor da base maior: ");
	scanf("%d", &baseg);
	printf("Digite o valor da base menor: ");
	scanf("%d", &basep);
	printf("Digite a altura do trapezio: ");
	scanf("%d", &alt);
	
	area=(baseg+basep)*alt/2;
	
	printf("\nA area do trapezio digitado e de: %f", area);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Ler notas, calcular a m�dia e informar se aluno est� aprovado */
/* Na hora de colocar as notas, eu devo coloc�-las com "ponto" e n�o com "v�rgula" */

int main() {
	int cod, nnota, naprov, nreprov, cont;
	float nota, soma, media;
	naprov=0;
	nreprov=0;
	printf("Informe o numero de notas da disciplina: ");
	scanf("%d", &nnota);
	do{
		printf("Informe o codigo do aluno: ");
		scanf("%d", &cod);
		soma=0;
		if (cod!=0){
			for (cont=1; cont<=nnota; cont++){
				printf("Informe a %d nota do aluno: \n", cont);
				scanf("%f", &nota);  // N�o esquecer que � um float, logo necessita ser "%f"
				soma=soma+nota;
			}
		media= soma/nnota;
		if (media>=6){
			naprov++;
		}	
		else{
			nreprov++;
		}
		}
	} while (cod!=0);
	printf("O numero de aprovados e: %d\n", naprov);
	printf("O numero de reprovados e: %d\n", nreprov);
	
	return 0;
}

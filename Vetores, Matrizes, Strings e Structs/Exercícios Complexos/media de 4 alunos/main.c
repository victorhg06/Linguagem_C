#include <stdio.h>
#include <stdlib.h>

/* Ler 4 notas e calcular m�dia dos alunos e da turma */

int main() {
	float notas[5][4];  // No meu exemplo s�o 5 alunos e 4 provas
	float media[4];
	float soma, somat, mediat;
	int i,j;
	
	somat=0;   // Devo especificar que � "=0", para n�o come�ar com 1
	mediat=0;
	
	for(i=0;i<5;i++){    // Aqui � sobre os alunos
	soma=0;
		for(j=0;j<4;j++){  // Aqui sobre as notas
		printf("Informe a nota %d do aluno %d: ", j+1, i+1);
		scanf("%f", &notas[i][j]);
		soma= soma+notas[i][j]; // A soma come�a com 0, logo ela vai se acumular 4 vezes e dar� um n�mero maior
		}
		media[i]=soma/4; // A m�dia ser� o valor acumulado da soma dividido por 4 provas, temos a m�dia individual
		somat=somat+media[i]; // A soma total come�a com zero e ela vai acumular as 4 m�dias individuais e som�-las
	}
	mediat=somat/5; //A m�dia total ser� a somat dos 5 alunos dividida por 5,que � a quantidade de alunos
	for (i=0;i<5;i++){
		printf("A media do aluno %d e: %2.f\n", i, media[i]);
	}
	printf("A media total da turma e: %2.f\n", mediat);
	
	
	
	return 0;
}

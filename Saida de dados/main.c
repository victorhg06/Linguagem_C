#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	printf("Estou aprendendo a programar em C \n"); // A utiliza��o do \n me permitiu que eu pulasse uma linha e possa escrever um novo texto sem se preocupar em ficar junto
	printf("Agora testarei a fun��o tab \t testando... \n"); // a utiliza��o do \t separou as frases com uma tabula��o, ver no F10
	printf("\b\b\b\b testando... \b\b\b\b testando \n"); // Ainda n�o vi utilidade no \b
	printf("Vamos agora "" testar o espaco\n"); //Ao digitar as aspas surgir� um espa�o entre as frases
	printf("Agora usarei a contrabarra \ � \n"); //Ainda n�o entendi direito sua fun��o
	printf("Vamos saltar uma p�gina no formul�rio \f \n");// O \f salta uma p�gina no formul�rio
	printf("E por fim vamos encerrar o texto \0 \n");
	printf("Estou lendo a unidade %d do livro \n", 1);// O s�mbolo %d indica que a vari�vel digitada ,1 � um n�mero inteiro
	printf("%s e uma disciplina importante do curso \n", "Esta");//Aqui eu declarei a vari�vel "Esta" como uma string que deve ser lida com o simbolo %s
	printf("%f\n", 57.35); //Teste para leitura de n�mero com ponto do tipo float por isso a utiliza��o do %f
	return 0;
}

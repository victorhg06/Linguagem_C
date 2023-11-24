#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	printf("Estou aprendendo a programar em C \n"); // A utilização do \n me permitiu que eu pulasse uma linha e possa escrever um novo texto sem se preocupar em ficar junto
	printf("Agora testarei a função tab \t testando... \n"); // a utilização do \t separou as frases com uma tabulação, ver no F10
	printf("\b\b\b\b testando... \b\b\b\b testando \n"); // Ainda não vi utilidade no \b
	printf("Vamos agora "" testar o espaco\n"); //Ao digitar as aspas surgirá um espaço entre as frases
	printf("Agora usarei a contrabarra \ Ç \n"); //Ainda não entendi direito sua função
	printf("Vamos saltar uma página no formulário \f \n");// O \f salta uma página no formulário
	printf("E por fim vamos encerrar o texto \0 \n");
	printf("Estou lendo a unidade %d do livro \n", 1);// O símbolo %d indica que a variável digitada ,1 é um número inteiro
	printf("%s e uma disciplina importante do curso \n", "Esta");//Aqui eu declarei a variável "Esta" como uma string que deve ser lida com o simbolo %s
	printf("%f\n", 57.35); //Teste para leitura de número com ponto do tipo float por isso a utilização do %f
	return 0;
}

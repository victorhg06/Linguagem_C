#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 3 // Definindo o tamanho do meu vetor

struct tipo_pilha{
	int dados[tamanho]; //Vetor criado
	int ini;         //Inicio da pilha
	int topo;         // Topo da pilha	
};

struct tipo_pilha pilha;  // Vari�vel para a struct

// Fun��o Empilhar
void empilha(int elemento){  //Criar a fun��o empilha que recebe o elemento a ser empilhado como parametro
	if(pilha.topo == tamanho){ 
//A fun��o vai verificar se o campo "topo" � igual ao "tamanho", pois se for vai avisar que esta cheio

		printf("Fila cheia\n");
		system("pause");
	}
	//Se o topo for menor que o tamanho, existe espa�o para adicionar novos elementos
	else{
		pilha.dados[pilha.topo] = elemento;
		//"pilha.topo" de dados recebe o elemento adicionado
		
		pilha.topo++; //Incremento o topo para ocupar o espa�o
	}
}


// Fun��o desempilhar necess�ria para remover elemento e decrementar 
int desempilha(){
	int elemento; //Sua fun��o � retornar esse elemento desempilhado para quem invocou sua desempilha��o
	if (pilha.topo == pilha.ini){//Se a pilha estiver vazia
		printf("Fila Vazia\n");
		system("pause");
		return -1;
	}
	else{
		pilha.topo--; //Decremento a pilha
		elemento = pilha.dados[pilha.topo];//A var elemento vai ser retornado para quem acionou a fun��o
		return elemento;
	}	
}


int main(int argc, char *argv[]) {
	pilha.ini = 0;
	pilha.topo = 0;
	
	 // Exemplo de uso das fun��es empilha() e desempilha()
    empilha(1);
    empilha(2);
    empilha(3);

    printf("Elemento desempilhado: %d\n", desempilha());
    system("pause");
    printf("Elemento desempilhado: %d\n", desempilha());
    system("pause");
    printf("Elemento desempilhado: %d\n", desempilha());
    system("pause");
    printf("Elemento desempilhado: %d\n", desempilha()); // Tentando desempilhar de uma pilha vazia
    system("pause");

	
	
	
	
	
	return 0;
}

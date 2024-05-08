#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 3

struct tipo_fila{ //Cria��o da nossa estrutura
	int dados[tamanho]; //Vetor de dados
	int ini;
	int fim;
};

struct tipo_fila fila; //Nomeando a vari�vel de nossa estrutura

//Criar nossa fun��o Enfileirar (push_back)
void enfileira(int elemento){
	if(fila.fim == tamanho){//Se o fim for igual ao tamanho, nossa fila est� cheia
		printf("Fila Cheia\n");
		system("pause");
	}
	else{
		fila.dados[fila.fim] = elemento; //O fila.fim recebe o elemento
		fila.fim++;
	}
}

//Desenfileirar(pop)
int desenfileira(){
	int elemento;
	int i;
	if(fila.fim == fila.ini){
		printf("Fila Vazia\n");
		system("pause");
	}
	else{
		elemento = fila.dados[fila.ini];
		//Aqui eu armazeno o valor que est� no in�cio na minha vari�vel de backup"elemento" para deixar o valor de in�cio vazio
		//O proximo passo � arrastar os elementos restantes em dire��o ao inicio
		for(i=0; i<tamanho; i++){ //Var "i" est� na posi��o "0" que esta desocupada nesse momento, enquanto i for menor que tam
			fila.dados[i] = fila.dados[i+1]; //Vai receber o elemento que est� a frente at� a var i ser menor que tamanho
		}
		fila.dados[fila.fim] = 0; //Zeramos o cara do fim da fila;
		fila.fim--; //Decrementa
		return elemento;
	}
}

int main(int argc, char *argv[]) {
	
	fila.ini = 0;
	fila.fim = 0;
	
	
	enfileira(10);
	enfileira(20);
	enfileira(30);
	
	printf("Elemento desenfileirado: %d\n", desenfileira());
	system("pause");	
	printf("Elemento desenfileirado: %d\n", desenfileira());
	system("pause");	
	printf("Elemento desenfileirado: %d\n", desenfileira());
	system("pause");	
	printf("Elemento desenfileirado: %d\n", desenfileira());
	system("pause");	
	
	
	
	
	return 0;
}

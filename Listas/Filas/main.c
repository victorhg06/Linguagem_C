#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 3

struct tipo_fila{ //Criação da nossa estrutura
	int dados[tamanho]; //Vetor de dados
	int ini;
	int fim;
};

struct tipo_fila fila; //Nomeando a variável de nossa estrutura

//Criar nossa função Enfileirar (push_back)
void enfileira(int elemento){
	if(fila.fim == tamanho){//Se o fim for igual ao tamanho, nossa fila está cheia
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
		//Aqui eu armazeno o valor que está no início na minha variável de backup"elemento" para deixar o valor de início vazio
		//O proximo passo é arrastar os elementos restantes em direção ao inicio
		for(i=0; i<tamanho; i++){ //Var "i" está na posição "0" que esta desocupada nesse momento, enquanto i for menor que tam
			fila.dados[i] = fila.dados[i+1]; //Vai receber o elemento que está a frente até a var i ser menor que tamanho
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

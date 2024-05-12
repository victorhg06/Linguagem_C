#include <stdio.h>
#include <stdlib.h>


typedef struct NO{
	int dado;
	struct NO *prox;
}NO;

typedef struct FILA{
	NO *ini;
	NO *fim;
}FILA;

void inicializaFila(FILA *f){//Nossa fila precisa come�ar em NULL, sen�o haveera erros. Por isso essa fun��o � importante
	f->ini = NULL;
	f->fim = NULL;
}



void enfileira(int dado, FILA *f){//preciso dizer em qual fila estou inserindo o dado com o ponteiro f
	NO *ptr = (NO*) malloc(sizeof(NO));
	if(ptr == NULL){
		printf("Erro de alocacao. \n");
		return;
	}else{
		ptr->dado = dado; //Esse primeiro � para quando estou inserindo um NO pela primeira vez
		ptr->prox = NULL;
		if(f->ini == NULL){//se for igual a NULL significa que � o primeiro n�
			f->ini = ptr;//fa�o o ini apontar para o novo no que estou alocando
		}//casoo nao seja o primeiro fa�o o fim apontar para o novo no pq sempre o fim aponta para o novo no que entra
		else{
			f->fim->prox = ptr;	
		}
		f->fim = ptr;
		return;
	}
}

int desinfileira(FILA *f){
	NO *ptr = f->ini;
	int dado; //var de backup para retornar o dado depois
	if(ptr != NULL){//Se for diferente significa que tem um elemento para remover
		f->ini = ptr->prox;//Como estou removendo, eu preciso atualizar o valor do inicio com o endere�o do proximo no
		ptr->prox = NULL;
		dado = ptr->dado; //salvei o dado na minha variavel de backup
		free(ptr);//Limpando a memoria do ptr
		//Caso eu esteja removendo o ultimmo elemento da fila eu devo fazer o inicio e fim apontarem para NULL
		if(f->ini == NULL){
			f->fim = NULL;
		}
		return dado;
	}
	else{
		printf("Fila vazia.\n");
		return;
	}
}

void imprimiFila(FILA *f){
	NO *ptr = f->ini;
	if(ptr != NULL){
		while(ptr != NULL){
			printf("%d ", ptr->dado);
			ptr = ptr->prox;
		}	
	}else{
		printf("Fila vazia.\n");
		return;
	}
}



int main(int argc, char *argv[]) {
	
	FILA *f1 = (FILA*) malloc(sizeof(FILA));
	if(f1 == NULL){
		printf("Erro de alocacao.\n");
		exit(-1);
	}else{
		inicializaFila(f1);//Necessariio inicializar essa fila
		
		enfileira(10, f1);
		enfileira(20, f1);
		enfileira(30, f1);
		
		imprimiFila(f1);
		
		printf("Tentando desenfileirar - resultado: %d\n\n", desinfileira(f1));
		imprimiFila(f1);
		system("pause");
		printf("Tentando desenfileirar - resultado: %d\n\n", desinfileira(f1));
		imprimiFila(f1);
		system("pause");
		printf("Tentando desenfileirar - resultado: %d\n\n", desinfileira(f1));
		imprimiFila(f1);
		system("pause");
	}	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct NO{
	int dado;
	struct NO* prox;	
}NO;

typedef struct LISTA{
	NO* ini; //Vai funcionar como referencia para add 
	NO* fim;
}LISTA;

LISTA l; //Nomeei minha lista

void insereNoInicio(int elemento){
	NO *ptr = (NO*) malloc(sizeof(NO));// Alocação dinamica
	ptr->dado = elemento;
	ptr->prox = NULL; // Inicializado como NULL
	//Se a lista estiver vazia, deveremos fazer o inicio receber ptr
	if(l.ini == NULL){
		l.ini = ptr; //Isso faz o ptr ir para o inicio da lista
		l.fim = ptr; //Por só ter ele ele também estará no fim da lista
	}
	else{ //Se a lista não estiver vazia coloco o novo elemento antes do elemento que já está la
		ptr->prox = l.ini; //Fiz o novo elemento apontar para o início
		l.ini = ptr; // O "l.ini" é uma referencia do inicio então devo faze-lo apontar para o novo elemento
	}
}

void insereNoFim(int elemento){
	NO *ptr = (NO*) malloc(sizeof(NO));// Alocação dinamica
	ptr->dado = elemento;
	ptr->prox = NULL; // Inicializado como NULL
	if(l.ini == NULL){
		l.fim = ptr;
		l.ini = ptr;
	}
	else{ //Se a lista ja tiver um elemento devo ir ao fim dela pendurar o novo elemento no fim
	l.fim->prox = ptr; //
	l.fim = ptr; //Agora ele aponta para o novo fim
	}
}

	int removeDoInicio(){ //Função para remover um elemento
	NO* ptr = l.ini; //Cria ponteiro que começa do inicio
	int elemento; //Criar uma variavel de backup
		if(ptr == NULL){
			printf("Lista vazia\n");
			return -1; //Código de erro
		}
		else{
			l.ini = l.ini->prox; //Desloco o inicio do primeiro elemento e torno ele o segundo para que eu possa excluir o primeiro elemento
			ptr->prox = NULL; //Faço aquele elemento ser desligado da lista, porem ainda esta na memoria
			elemento = ptr->dado; //
			free(ptr); //Limpando o espaço da memoria, isso deixa a posição disponivel
		}
	}




void imprimir(){ //Função para visualozar na tela
	NO* ptr = l.ini; //Mostrar o início
	printf("Início -> ");
	while(ptr != NULL){
		printf("%d ", ptr->dado); //Quero mostrar o dado
		ptr = ptr->prox; // Para mostrar o proximo
	}
	printf(" <- FIM\n\n");
}

void menu(){
	printf("1 - Para inserir no inicio da lista;\n");
	printf("2 - Para inserir no fim da lista;\n");
	printf("3 - Para remover no inicio da lista;\n");
	printf("4 - Para imprimir o conteudo da lista;\n");
	printf("0 - Para encerrar;\n");
}





int main(int argc, char *argv[]) {
	
	int op, dado; // 
	l.ini = NULL; //Garantir que inicie vazia
	l.fim = NULL; //Garantir que inicie vazia
	
	//Enquanto usuario nao digitar 0, continua repetindo
	do{
		system("cls");
		menu(); //Chamei a função menu
		scanf("%d ", &op);
		fflush(stdin); //Garante que o teclado não retorne lixo na tela
		system("cls");
		switch(op){ //Estrutura de escolha
			case 0:
				break;
			case 1:  //Inserção Inicio
				printf("Informe o dado a ser inserido no inicio. \n");
				scanf("%d", &dado);
				fflush(stdin);
				insereNoInicio(dado);
				system("pause");
				break;
			case 2:  //Inserção no fim
				printf("Informe o dado a ser inserido no fim. \n");
				scanf("%d", &dado);
				fflush(stdin);
				insereNoFim(dado);
				system("pause");
				break;
			case 3: //remoção inicio	
				dado = removeDoInicio();
				if(dado == -1){
					printf("Erro\n");
				}
				else{
					printf("Removendo o elemento %d do inicio da lista.\n", dado);
				}
				fflush(stdin);
				system("pause");
				break;
			case 4:  //Impressao do conteudo
				imprimir();
				system("pause");
				break;
			default:
				printf("Opcao Invalida.\n");
				break;			
		}
	}while(op != 0);
	return 0;
}

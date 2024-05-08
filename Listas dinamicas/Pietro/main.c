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
	NO *ptr = (NO*) malloc(sizeof(NO));// Aloca��o dinamica
	ptr->dado = elemento;
	ptr->prox = NULL; // Inicializado como NULL
	//Se a lista estiver vazia, deveremos fazer o inicio receber ptr
	if(l.ini == NULL){
		l.ini = ptr; //Isso faz o ptr ir para o inicio da lista
		l.fim = ptr; //Por s� ter ele ele tamb�m estar� no fim da lista
	}
	else{ //Se a lista n�o estiver vazia coloco o novo elemento antes do elemento que j� est� la
		ptr->prox = l.ini; //Fiz o novo elemento apontar para o in�cio
		l.ini = ptr; // O "l.ini" � uma referencia do inicio ent�o devo faze-lo apontar para o novo elemento
	}
}

void insereNoFim(int elemento){
	NO *ptr = (NO*) malloc(sizeof(NO));// Aloca��o dinamica
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

	int removeDoInicio(){ //Fun��o para remover um elemento
	NO* ptr = l.ini; //Cria ponteiro que come�a do inicio
	int elemento; //Criar uma variavel de backup
		if(ptr == NULL){
			printf("Lista vazia\n");
			return -1; //C�digo de erro
		}
		else{
			l.ini = l.ini->prox; //Desloco o inicio do primeiro elemento e torno ele o segundo para que eu possa excluir o primeiro elemento
			ptr->prox = NULL; //Fa�o aquele elemento ser desligado da lista, porem ainda esta na memoria
			elemento = ptr->dado; //
			free(ptr); //Limpando o espa�o da memoria, isso deixa a posi��o disponivel
		}
	}




void imprimir(){ //Fun��o para visualozar na tela
	NO* ptr = l.ini; //Mostrar o in�cio
	printf("In�cio -> ");
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
		menu(); //Chamei a fun��o menu
		scanf("%d ", &op);
		fflush(stdin); //Garante que o teclado n�o retorne lixo na tela
		system("cls");
		switch(op){ //Estrutura de escolha
			case 0:
				break;
			case 1:  //Inser��o Inicio
				printf("Informe o dado a ser inserido no inicio. \n");
				scanf("%d", &dado);
				fflush(stdin);
				insereNoInicio(dado);
				system("pause");
				break;
			case 2:  //Inser��o no fim
				printf("Informe o dado a ser inserido no fim. \n");
				scanf("%d", &dado);
				fflush(stdin);
				insereNoFim(dado);
				system("pause");
				break;
			case 3: //remo��o inicio	
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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 struct no{ //estrutura do no
	int dado; //Guarda a informação
	struct no *proximo; // Aponta para o proximo no
};

typedef struct no *ptr_no; //ponteiro do tipo no necessario para fazer alocaçao dinamica para cada novo elemento da lista

ptr_no lista; //Variavel que aponta para o inicio da lista

int op;


//Com a lista definida podemos criar a função mostrar, que usaremos para desenhar na tela o conteudo.
//Recebe como parametro a var do tipo ptr_no que criamos no começo para apontar para o inicio da lista.

 /* void lista_mostrar(ptr_no lista){
	system("cls");
	while(1){
		printf("%d, ", lista->dado);
		if(lista->proximo == NULL){
			break;
		}
		lista = lista->proximo;
	}
}
Nesse exemplo criamos um laço infinito (loop infinito) que irá funcionar até
que o atributo proximo do nó atual seja nulo. Essa abordagem é perigosa, porque
se houver um erro na implementação e o valor do último elemento não apontar
para um endereço nulo, ficaremos presos nesse laço de forma indeterminada.
 */

void lista_mostrar_2(ptr_no lista){
	system("cls");
	while(lista->proximo != NULL){
		printf("%d, ", lista->dado);
		lista = lista->proximo;
		
	}
		
}
/* A repetição irá parar quando chegar ao último elemento, mas sairá do laço
antes de imprimir o valor de dado do último nó na tela. Para isso se faz necessário um comando printf adicional no final da função.*/

//Para a inserção dinâmica de um novo nó na lista, vamos criar uma função chamada lista_inserir().

void lista_inserir(ptr_no lista){
	while(lista->proximo != NULL){
		lista = lista->proximo; //Faz com que a var lista percorra toda a lista ate achar o valor NULL
	}
	lista->proximo = (ptr_no) malloc(sizeof(struct no));
	lista = lista->proximo;
	lista->dado = rand()%100; //Essa função cria um valor aleatorio
	lista->proximo = NULL;
}

/* Vamos criar uma nova função chamada lista_remover(), que irá receber como parâmetro a variável que aponta para o começo da lista.
Novamente precisaremos de um laço que percorra a lista a partir do primeiro elemento até a posição que queremos remover. Se a estrutura do nó possuísse
dois ponteiros, um para o elemento anterior e um para o próximo, poderíamos ir e voltar livremente pela lista. Como não é o nosso caso, precisamos guardar a
posição atual antes de mover a lista para o próximo nó. */

void lista_remover(ptr_no lista){
	int dado;
	ptr_no atual;
	atual = (ptr_no) malloc(sizeof(struct no));
	printf("\n\nEscolha um dos itens: \n");
	scanf("%d", dado);
	while((lista->dado != dado)){
		if(lista->proximo == NULL){
			break;
		}
		atual = lista;
		lista = lista->proximo;
	}
	if(lista->dado == dado){
		atual->proximo = lista->proximo;
	}
}

void menu_mostrar(){
lista_mostrar(lista);
printf("\n\nEscolha uma das opcoes:\n");
printf("1 - Inserir no final da Lista\n");
printf("2 - Remover um item da Lista\n");
printf("0 - Sair\n\n");
}


int main(int argc, char *argv[]) {
//A variável do tipo ponteiro lista foi criada para apontar para a nossa lista encadeada. 
//Como ela ainda não existe, vamos criar o primeiro nó com o atributo dado valendo 0 e o ponteiro proximo apontando para null.

lista = (ptr_no) malloc(sizeof(no));
lista->dado = 0;
lista->proximo = NULL;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 struct no{ //estrutura do no
	int dado; //Guarda a informa��o
	struct no *proximo; // Aponta para o proximo no
};

typedef struct no *ptr_no; //ponteiro do tipo no necessario para fazer aloca�ao dinamica para cada novo elemento da lista

ptr_no lista; //Variavel que aponta para o inicio da lista

int op;


//Com a lista definida podemos criar a fun��o mostrar, que usaremos para desenhar na tela o conteudo.
//Recebe como parametro a var do tipo ptr_no que criamos no come�o para apontar para o inicio da lista.

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
Nesse exemplo criamos um la�o infinito (loop infinito) que ir� funcionar at�
que o atributo proximo do n� atual seja nulo. Essa abordagem � perigosa, porque
se houver um erro na implementa��o e o valor do �ltimo elemento n�o apontar
para um endere�o nulo, ficaremos presos nesse la�o de forma indeterminada.
 */

void lista_mostrar_2(ptr_no lista){
	system("cls");
	while(lista->proximo != NULL){
		printf("%d, ", lista->dado);
		lista = lista->proximo;
		
	}
		
}
/* A repeti��o ir� parar quando chegar ao �ltimo elemento, mas sair� do la�o
antes de imprimir o valor de dado do �ltimo n� na tela. Para isso se faz necess�rio um comando printf adicional no final da fun��o.*/

//Para a inser��o din�mica de um novo n� na lista, vamos criar uma fun��o chamada lista_inserir().

void lista_inserir(ptr_no lista){
	while(lista->proximo != NULL){
		lista = lista->proximo; //Faz com que a var lista percorra toda a lista ate achar o valor NULL
	}
	lista->proximo = (ptr_no) malloc(sizeof(struct no));
	lista = lista->proximo;
	lista->dado = rand()%100; //Essa fun��o cria um valor aleatorio
	lista->proximo = NULL;
}

/* Vamos criar uma nova fun��o chamada lista_remover(), que ir� receber como par�metro a vari�vel que aponta para o come�o da lista.
Novamente precisaremos de um la�o que percorra a lista a partir do primeiro elemento at� a posi��o que queremos remover. Se a estrutura do n� possu�sse
dois ponteiros, um para o elemento anterior e um para o pr�ximo, poder�amos ir e voltar livremente pela lista. Como n�o � o nosso caso, precisamos guardar a
posi��o atual antes de mover a lista para o pr�ximo n�. */

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
//A vari�vel do tipo ponteiro lista foi criada para apontar para a nossa lista encadeada. 
//Como ela ainda n�o existe, vamos criar o primeiro n� com o atributo dado valendo 0 e o ponteiro proximo apontando para null.

lista = (ptr_no) malloc(sizeof(no));
lista->dado = 0;
lista->proximo = NULL;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

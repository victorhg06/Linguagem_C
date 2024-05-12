#include <stdio.h>
#include <stdlib.h>


typedef struct NO{//Aqui, estamos usando typedef para criar um novo tipo de dados chamado NO. Este tipo de dados ser� uma estrutura struct contendo os campos dado e prox.
	int dado;//Este campo da estrutura armazena o dado que queremos armazenar na pilha. No caso de uma pilha, este seria o elemento que est� sendo empilhado.
	struct NO *prox;//Este campo da estrutura � um ponteiro para o pr�ximo n� na pilha. Ele nos permite encadear os n�s da pilha, de modo que cada n� aponta para o pr�ximo n� na pilha.
}NO;

typedef struct PILHA{//Aqui, estamos novamente usando typedef para criar um novo tipo de dados chamado PILHA. Este tipo de dados ser� uma estrutura struct que representa a pilha.
	NO *topo; //Dentro da estrutura PILHA, temos um �nico campo chamado topo, que � um ponteiro para um n� (NO). Esse campo topo ser� utilizado para apontar para o n� no topo da pilha.
}PILHA;
//O campo topo � um ponteiro para o n� no topo da pilha. 
//Isso significa que ele aponta para o primeiro elemento que foi inserido na pilha e ser� o primeiro a ser removido (�ltimo a ser inserido).
//Ao usar uma estrutura PILHA, podemos acessar facilmente o topo da pilha atrav�s do campo topo.
//Quando queremos adicionar um novo elemento � pilha, atualizamos o campo topo para apontar para o novo n� inserido.
//Quando queremos remover um elemento da pilha, removemos o n� apontado pelo campo topo e atualizamos o campo topo para apontar para o pr�ximo n� na pilha.



void inicializaPilha(PILHA *p){ //Essa fun��o inicializaPilha serve para inicializar uma pilha vazia. O *p em void inicializaPilha(PILHA *p) indica que p � um ponteiro para uma estrutura do tipo PILHA.
	p->topo = NULL;//Dentro da fun��o, estamos atribuindo NULL ao campo topo da pilha p. Isso significa que estamos definindo o topo da pilha como nulo, indicando que a pilha est� vazia.
} 
//No caso da fun��o inicializaPilha, p � um ponteiro para uma estrutura PILHA.
//Portanto, quando modificamos p->topo dentro da fun��o, estamos modificando o campo topo da estrutura PILHA que foi passada como argumento para a fun��o. 
// Isso nos permite inicializar a pilha corretamente, definindo seu topo como NULL, sem precisar retornar um valor da fun��o.




void empilha (int dado, PILHA *p){//Aqui, declaramos a fun��o empilha, que recebe dois par�metros: dado, que � o valor a ser empilhado, e p, que � um ponteiro para a pilha onde o elemento ser� empilhado.
	NO *ptr = (NO*) malloc(sizeof(NO));//Aqui, estamos alocando dinamicamente mem�ria para um novo n� (NO). Isso cria um novo n� na mem�ria que ser� utilizado para armazenar o dado a ser empilhado.
	if(ptr == NULL){
		printf("Erro de alocacao de no. \n");
		return; // Se ptr for NULL, significa que n�o foi poss�vel alocar mem�ria para o novo n�. Nesse caso, exibimos uma mensagem de erro e sa�mos da fun��o.
	}
	else{
		ptr->dado = dado; // Aqui, atribu�mos o valor dado ao campo dado do novo n� ptr. Isso define o valor que estamos empilhando.
		ptr->prox = p->topo;//Em seguida, atualizamos o campo prox do novo n� ptr para apontar para o n� que est� atualmente no topo da pilha. Isso � feito para manter a ordem correta dos elementos na pilha. 
		p->topo = ptr;//Por fim, atualizamos o campo topo da estrutura PILHA para apontar para o novo n� ptr, tornando-o o novo topo da pilha.
	}
}

/* OBS.: "NO *ptr": Aqui, NO � o tipo de dados (uma estrutura definida anteriormente) e *ptr � um ponteiro para esse tipo de dados. 
Isso significa que ptr � uma vari�vel que pode armazenar o endere�o de mem�ria de uma estrutura do tipo NO. 
Quando usamos *ptr, estamos nos referindo ao valor que ptr aponta na mem�ria.*/

/*OBS.: "(NO*) malloc(sizeof(NO))": Aqui, malloc(sizeof(NO)) aloca dinamicamente mem�ria para uma estrutura do tipo NO. 
O retorno de malloc � um ponteiro para o bloco de mem�ria alocado, que � do tipo void *. 
No entanto, para atribuir esse ponteiro a ptr, precisamos fazer uma convers�o de tipo expl�cita usando (NO*), indicando que queremos um ponteiro para NO.
Em resumo, a ordem do asterisco indica o tipo de dados ao qual o ponteiro se refere. 
Em NO *ptr, o asterisco se aplica ao tipo de dados NO, indicando que ptr � um ponteiro para uma estrutura NO. 
Em (NO*) malloc(sizeof(NO)), o asterisco se aplica ao resultado de malloc, indicando que estamos convertendo o ponteiro retornado por malloc para um ponteiro para NO.*/



int desempilha(PILHA *p){//Aqui, declaramos a fun��o desempilha, que recebe um ponteiro para uma estrutura PILHA como argumento. A fun��o retorna um inteiro, que representa o dado desempilhado.
	NO* ptr = p->topo;// Criamos um ponteiro ptr que aponta para o n� que est� no topo da pilha. Isso nos permite acessar e manipular esse n� durante a desempilha.
	/*Quando declaramos NO* ptr, estamos criando um ponteiro que pode armazenar o endere�o de mem�ria de uma estrutura NO.
	 Isso significa que ptr n�o armazena o pr�prio valor da estrutura NO, mas sim o endere�o de mem�ria onde essa estrutura est� localizada.
	Em outras palavras, ptr n�o cont�m o valor da estrutura NO, mas sim um endere�o que aponta para onde essa estrutura est� armazenada na mem�ria.
	Esse ponteiro nos permite acessar e manipular a estrutura NO de forma eficiente, especialmente quando trabalhamos com aloca��o din�mica de mem�ria ou estruturas encadeadas, como � o caso de uma pilha. */
	int dado;//Esta vari�vel ser� usada para armazenar o dado que ser� desempilhado.
	if(ptr == NULL){//Verificamos se o ponteiro ptr � NULL, o que indica que a pilha est� vazia. Se isso acontecer, exibimos uma mensagem de erro e retornamos da fun��o.
		printf("Pilha Vazia. \n");
		return;
	}
	else{
		p->topo = ptr->prox; //Atualizamos o campo topo da estrutura PILHA para apontar para o pr�ximo n� na pilha, removendo assim o n� atual do topo.
		ptr->prox = NULL; // Desligamos o n� que est� sendo removido da pilha, definindo seu campo prox como NULL. Isso garante que o n� n�o esteja mais conectado � pilha.
		dado = ptr->dado;//Armazenamos o dado contido no n� que est� sendo desempilhado na vari�vel dado.
		free(ptr);//Liberamos a mem�ria alocada para o n� que est� sendo desempilhado usando a fun��o free(). Isso � importante para evitar vazamentos de mem�ria.
		return dado;
	}
}

void imprimePilha(PILHA *p){//recebe um ponteiro para uma estrutura PILHA como argumento. A fun��o n�o retorna nenhum valor (void).
	NO *ptr = p->topo;//Criamos um ponteiro ptr que aponta para o n� que est� no topo da pilha. Isso nos permite percorrer a pilha para imprimir seus elementos.
	if(ptr == NULL){
		printf("Pilha vazia. \n");
		return;
	}
	else{
		while(ptr != NULL){//Aqui, iniciamos um loop enquanto o ponteiro ptr n�o for NULL. Isso significa que o loop continuar� enquanto houver elementos na pilha para imprimir.
			printf("%d ", ptr->dado);// Dentro do loop, imprimimos o dado armazenado no n� atualmente apontado por ptr. Nesse caso, estamos imprimindo apenas o valor do campo dado.
			ptr = ptr->prox;//Ap�s imprimir o dado do n� atual, movemos o ponteiro ptr para o pr�ximo n� na pilha, utilizando o campo prox. Isso nos permite percorrer todos os n�s da pilha.
		}
		printf("\n");//Ap�s o t�rmino do loop, imprimimos uma quebra de linha para formatar a sa�da.
	}	
}


int main(int argc, char *argv[]) {
	
	PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));//Alocamos dinamicamente mem�ria para uma estrutura do tipo PILHA. Isso cria uma nova pilha na mem�ria que ser� utilizada no programa. Se a aloca��o de mem�ria falhar, uma mensagem de erro ser� exibida e o programa ser� encerrado.
	if(p1 == NULL){//Verificamos se a aloca��o de mem�ria para a pilha foi bem-sucedida. Se p1 for NULL, significa que ocorreu um erro na aloca��o de mem�ria, ent�o exibimos uma mensagem de erro e encerramos o programa.
		printf("Erro de alocacao de pilha.\n");
		exit(0);
	}
	else{//Se a aloca��o de mem�ria for bem-sucedida, continuamos com o programa.
		inicializaPilha(p1);// Inicializamos a pilha rec�m-criada utilizando a fun��o inicializaPilha, que define o topo da pilha como NULL.
		
		empilha(10, p1);// Empilhamos o valor 10 na pilha p1.
		empilha(20, p1);// Empilhamos o valor 10 na pilha p2.
		empilha(30, p1);// Empilhamos o valor 10 na pilha p3.
		
		imprimePilha(p1);
		
		
		printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
		imprimePilha(p1);
		system("pause");
		printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
		imprimePilha(p1);
		system("pause");
		printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
		imprimePilha(p1);
		system("pause");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


typedef struct NO{//Aqui, estamos usando typedef para criar um novo tipo de dados chamado NO. Este tipo de dados será uma estrutura struct contendo os campos dado e prox.
	int dado;//Este campo da estrutura armazena o dado que queremos armazenar na pilha. No caso de uma pilha, este seria o elemento que está sendo empilhado.
	struct NO *prox;//Este campo da estrutura é um ponteiro para o próximo nó na pilha. Ele nos permite encadear os nós da pilha, de modo que cada nó aponta para o próximo nó na pilha.
}NO;

typedef struct PILHA{//Aqui, estamos novamente usando typedef para criar um novo tipo de dados chamado PILHA. Este tipo de dados será uma estrutura struct que representa a pilha.
	NO *topo; //Dentro da estrutura PILHA, temos um único campo chamado topo, que é um ponteiro para um nó (NO). Esse campo topo será utilizado para apontar para o nó no topo da pilha.
}PILHA;
//O campo topo é um ponteiro para o nó no topo da pilha. 
//Isso significa que ele aponta para o primeiro elemento que foi inserido na pilha e será o primeiro a ser removido (último a ser inserido).
//Ao usar uma estrutura PILHA, podemos acessar facilmente o topo da pilha através do campo topo.
//Quando queremos adicionar um novo elemento à pilha, atualizamos o campo topo para apontar para o novo nó inserido.
//Quando queremos remover um elemento da pilha, removemos o nó apontado pelo campo topo e atualizamos o campo topo para apontar para o próximo nó na pilha.



void inicializaPilha(PILHA *p){ //Essa função inicializaPilha serve para inicializar uma pilha vazia. O *p em void inicializaPilha(PILHA *p) indica que p é um ponteiro para uma estrutura do tipo PILHA.
	p->topo = NULL;//Dentro da função, estamos atribuindo NULL ao campo topo da pilha p. Isso significa que estamos definindo o topo da pilha como nulo, indicando que a pilha está vazia.
} 
//No caso da função inicializaPilha, p é um ponteiro para uma estrutura PILHA.
//Portanto, quando modificamos p->topo dentro da função, estamos modificando o campo topo da estrutura PILHA que foi passada como argumento para a função. 
// Isso nos permite inicializar a pilha corretamente, definindo seu topo como NULL, sem precisar retornar um valor da função.




void empilha (int dado, PILHA *p){//Aqui, declaramos a função empilha, que recebe dois parâmetros: dado, que é o valor a ser empilhado, e p, que é um ponteiro para a pilha onde o elemento será empilhado.
	NO *ptr = (NO*) malloc(sizeof(NO));//Aqui, estamos alocando dinamicamente memória para um novo nó (NO). Isso cria um novo nó na memória que será utilizado para armazenar o dado a ser empilhado.
	if(ptr == NULL){
		printf("Erro de alocacao de no. \n");
		return; // Se ptr for NULL, significa que não foi possível alocar memória para o novo nó. Nesse caso, exibimos uma mensagem de erro e saímos da função.
	}
	else{
		ptr->dado = dado; // Aqui, atribuímos o valor dado ao campo dado do novo nó ptr. Isso define o valor que estamos empilhando.
		ptr->prox = p->topo;//Em seguida, atualizamos o campo prox do novo nó ptr para apontar para o nó que está atualmente no topo da pilha. Isso é feito para manter a ordem correta dos elementos na pilha. 
		p->topo = ptr;//Por fim, atualizamos o campo topo da estrutura PILHA para apontar para o novo nó ptr, tornando-o o novo topo da pilha.
	}
}

/* OBS.: "NO *ptr": Aqui, NO é o tipo de dados (uma estrutura definida anteriormente) e *ptr é um ponteiro para esse tipo de dados. 
Isso significa que ptr é uma variável que pode armazenar o endereço de memória de uma estrutura do tipo NO. 
Quando usamos *ptr, estamos nos referindo ao valor que ptr aponta na memória.*/

/*OBS.: "(NO*) malloc(sizeof(NO))": Aqui, malloc(sizeof(NO)) aloca dinamicamente memória para uma estrutura do tipo NO. 
O retorno de malloc é um ponteiro para o bloco de memória alocado, que é do tipo void *. 
No entanto, para atribuir esse ponteiro a ptr, precisamos fazer uma conversão de tipo explícita usando (NO*), indicando que queremos um ponteiro para NO.
Em resumo, a ordem do asterisco indica o tipo de dados ao qual o ponteiro se refere. 
Em NO *ptr, o asterisco se aplica ao tipo de dados NO, indicando que ptr é um ponteiro para uma estrutura NO. 
Em (NO*) malloc(sizeof(NO)), o asterisco se aplica ao resultado de malloc, indicando que estamos convertendo o ponteiro retornado por malloc para um ponteiro para NO.*/



int desempilha(PILHA *p){//Aqui, declaramos a função desempilha, que recebe um ponteiro para uma estrutura PILHA como argumento. A função retorna um inteiro, que representa o dado desempilhado.
	NO* ptr = p->topo;// Criamos um ponteiro ptr que aponta para o nó que está no topo da pilha. Isso nos permite acessar e manipular esse nó durante a desempilha.
	/*Quando declaramos NO* ptr, estamos criando um ponteiro que pode armazenar o endereço de memória de uma estrutura NO.
	 Isso significa que ptr não armazena o próprio valor da estrutura NO, mas sim o endereço de memória onde essa estrutura está localizada.
	Em outras palavras, ptr não contém o valor da estrutura NO, mas sim um endereço que aponta para onde essa estrutura está armazenada na memória.
	Esse ponteiro nos permite acessar e manipular a estrutura NO de forma eficiente, especialmente quando trabalhamos com alocação dinâmica de memória ou estruturas encadeadas, como é o caso de uma pilha. */
	int dado;//Esta variável será usada para armazenar o dado que será desempilhado.
	if(ptr == NULL){//Verificamos se o ponteiro ptr é NULL, o que indica que a pilha está vazia. Se isso acontecer, exibimos uma mensagem de erro e retornamos da função.
		printf("Pilha Vazia. \n");
		return;
	}
	else{
		p->topo = ptr->prox; //Atualizamos o campo topo da estrutura PILHA para apontar para o próximo nó na pilha, removendo assim o nó atual do topo.
		ptr->prox = NULL; // Desligamos o nó que está sendo removido da pilha, definindo seu campo prox como NULL. Isso garante que o nó não esteja mais conectado à pilha.
		dado = ptr->dado;//Armazenamos o dado contido no nó que está sendo desempilhado na variável dado.
		free(ptr);//Liberamos a memória alocada para o nó que está sendo desempilhado usando a função free(). Isso é importante para evitar vazamentos de memória.
		return dado;
	}
}

void imprimePilha(PILHA *p){//recebe um ponteiro para uma estrutura PILHA como argumento. A função não retorna nenhum valor (void).
	NO *ptr = p->topo;//Criamos um ponteiro ptr que aponta para o nó que está no topo da pilha. Isso nos permite percorrer a pilha para imprimir seus elementos.
	if(ptr == NULL){
		printf("Pilha vazia. \n");
		return;
	}
	else{
		while(ptr != NULL){//Aqui, iniciamos um loop enquanto o ponteiro ptr não for NULL. Isso significa que o loop continuará enquanto houver elementos na pilha para imprimir.
			printf("%d ", ptr->dado);// Dentro do loop, imprimimos o dado armazenado no nó atualmente apontado por ptr. Nesse caso, estamos imprimindo apenas o valor do campo dado.
			ptr = ptr->prox;//Após imprimir o dado do nó atual, movemos o ponteiro ptr para o próximo nó na pilha, utilizando o campo prox. Isso nos permite percorrer todos os nós da pilha.
		}
		printf("\n");//Após o término do loop, imprimimos uma quebra de linha para formatar a saída.
	}	
}


int main(int argc, char *argv[]) {
	
	PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));//Alocamos dinamicamente memória para uma estrutura do tipo PILHA. Isso cria uma nova pilha na memória que será utilizada no programa. Se a alocação de memória falhar, uma mensagem de erro será exibida e o programa será encerrado.
	if(p1 == NULL){//Verificamos se a alocação de memória para a pilha foi bem-sucedida. Se p1 for NULL, significa que ocorreu um erro na alocação de memória, então exibimos uma mensagem de erro e encerramos o programa.
		printf("Erro de alocacao de pilha.\n");
		exit(0);
	}
	else{//Se a alocação de memória for bem-sucedida, continuamos com o programa.
		inicializaPilha(p1);// Inicializamos a pilha recém-criada utilizando a função inicializaPilha, que define o topo da pilha como NULL.
		
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

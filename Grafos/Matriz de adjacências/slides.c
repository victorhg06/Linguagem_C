#include <stdio.h>
#include <stdlib.h>
#define maximo 10 // Define o número de vértices máximo que nossa estrutura vai ter

int ma[maximo][maximo];//Criação da matriz quadrada
int tamanho = 0; //Variável que controla se teremos que usar o maximo ou não

//Criação da função grafo tamanho
int grafo_tamanho(){
	int tam = 0;//Inicia valendo 0 até que o usuário coloque o tamanho
	while(tam > maximo || tam <1){
		printf("Escolha a quantidade de vértices: \n");
		scanf("%d", &tam); //O tamanho não pode passar do valor definido como máximo e não pode ser negativo ou 0
	}
	return tam;//O valor que o usuario colocou será retornado e atribuido à variável "tamanho" que está valendo 0 por enquanto
}

/*Essa parte acima tratou sobre a estrutura dos dados, agora iremos tratar abaixo sobre a inserção de arestas */

void inserir_aresta(int num1, int num2){  //"num1" é o vértice de origem e "num2" é o de destino
	//Antes de inserir as arestas preciso fazer algumas verificacações antes abaixo
	if(num1 > tamanho-1 ||
	   num2 > tamanho-1 ||
	   num1 <0 || num2 <0){
	   	printf("Erro!");
	   	system("pause");
	   }//Essa condição testa se o usuário não está inserindo um valor que não esteja no intervalo do definido anteriormente
	else{
		ma[num1][num2] = 1;
		ma[num2][num1] = 1;
	}//Dependendo dos valores que o usuário preencheu para num1 e num2, nós vamos preenchendo a matriz de adjacência em ambas as direções
}
/*Abaxo trabalharemos para remover arestas*/

void remover_aresta(int num1, int num2){
	if(num1 > tamanho-1 ||
	   num2 > tamanho-1 ||
	   num1 <0 || num2 <0){
	   	printf("Erro!");
	   	system("pause");
	   }//Essa condição testa se o usuário não está inserindo um valor que não esteja no intervalo do definido anteriormente
	else{
		ma[num1][num2] = 0;
		ma[num2][num1] = 0;
	}
}
/*Abaixo criaremos o código para mostrar a matriz, este código precisará percorrer a matriz para ver onde tem o "1" e onde não tem*/

void exibir_ma(){
	int i, j;
	printf("Matriz de arestas: \n");
	for(i=0; i<tamanho; i++){
		printf("[ ");
		for(j=0; j<tamanho; j++){
			printf("%d ", ma[i][j]);
		}
		printf("]\n");
	}
}



































int main(int argc, char *argv[]) {
	return 0;
}

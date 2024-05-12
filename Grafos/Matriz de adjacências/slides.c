#include <stdio.h>
#include <stdlib.h>
#define maximo 10 // Define o n�mero de v�rtices m�ximo que nossa estrutura vai ter

int ma[maximo][maximo];//Cria��o da matriz quadrada
int tamanho = 0; //Vari�vel que controla se teremos que usar o maximo ou n�o

//Cria��o da fun��o grafo tamanho
int grafo_tamanho(){
	int tam = 0;//Inicia valendo 0 at� que o usu�rio coloque o tamanho
	while(tam > maximo || tam <1){
		printf("Escolha a quantidade de v�rtices: \n");
		scanf("%d", &tam); //O tamanho n�o pode passar do valor definido como m�ximo e n�o pode ser negativo ou 0
	}
	return tam;//O valor que o usuario colocou ser� retornado e atribuido � vari�vel "tamanho" que est� valendo 0 por enquanto
}

/*Essa parte acima tratou sobre a estrutura dos dados, agora iremos tratar abaixo sobre a inser��o de arestas */

void inserir_aresta(int num1, int num2){  //"num1" � o v�rtice de origem e "num2" � o de destino
	//Antes de inserir as arestas preciso fazer algumas verificaca��es antes abaixo
	if(num1 > tamanho-1 ||
	   num2 > tamanho-1 ||
	   num1 <0 || num2 <0){
	   	printf("Erro!");
	   	system("pause");
	   }//Essa condi��o testa se o usu�rio n�o est� inserindo um valor que n�o esteja no intervalo do definido anteriormente
	else{
		ma[num1][num2] = 1;
		ma[num2][num1] = 1;
	}//Dependendo dos valores que o usu�rio preencheu para num1 e num2, n�s vamos preenchendo a matriz de adjac�ncia em ambas as dire��es
}
/*Abaxo trabalharemos para remover arestas*/

void remover_aresta(int num1, int num2){
	if(num1 > tamanho-1 ||
	   num2 > tamanho-1 ||
	   num1 <0 || num2 <0){
	   	printf("Erro!");
	   	system("pause");
	   }//Essa condi��o testa se o usu�rio n�o est� inserindo um valor que n�o esteja no intervalo do definido anteriormente
	else{
		ma[num1][num2] = 0;
		ma[num2][num1] = 0;
	}
}
/*Abaixo criaremos o c�digo para mostrar a matriz, este c�digo precisar� percorrer a matriz para ver onde tem o "1" e onde n�o tem*/

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Sempre incluir esta biblioteca

/* Ler um nome e mostrar as letras na posi��o par */

int main() {
	char nome[30];
	int tam, i;
	
	printf("Digite o nome: ");
	gets(nome);  // Usamos o "gets()" pois facilita na leitura da string
	tam=strlen(nome);  // Aqui usamos a fun��o que retorna o tamanho da string armazenada e atribuimos seu valor na vari�vel "tam"
	for(i=0;i<tam;i++){
		if(i%2==0){
			printf("\n %c", nome[i]);
		}
	}
	return 0;
}

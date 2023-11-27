#include <stdio.h>
#include <stdlib.h>

/* Elaborar cadastro de livros, com menu */

struct livro{
	int codigo;
	char titulo[30];
	char autor[30];
	char area[30];
	int ano;
	char editora[30];
};
void limparTela() {
    printf("\033[H\033[J"); // Código ANSI para limpar a tela
};

int main() {
	struct livro ficha[5];
	struct livro troca;
	int i, j, busca, acha, op ;
	op = 0;
	
	while (op!=5){
		printf("1. Cadastrar livros \n");
		printf("2. Imprimir as Informacoes dos livros \n");
		printf("3. Pesquisar Livros por codigo \n");
		printf("4. Ordenar Livros por ano \n");
		printf("5. Sair do programa \n");
		printf("Digite a opcao desejada: ");
		scanf("%d", &op);
	
	if (op==1){
		for (i=0;i<5;i++){
			printf("Digite o codigo do livro: ");
			scanf("%d", &ficha[i].codigo);
			printf("Escreva o titulo do livro: ");
			scanf("%s", ficha[i].titulo);
			printf("Digite o nome do autor do livro: ");
			scanf("%s", ficha[i].autor);
			printf("O livro pertence a qual area? ");
			scanf("%s", ficha[i].area);
			printf("Digite o ano de publicacao do livro: ");
			scanf("%d", &ficha[i].ano);
			printf("Digite a editora do livro: ");
			scanf("%s", ficha[i].editora);
		}
	}
	else{
		if(op==2){
			system("cls");
			for(i=0;i<5;i++){
				printf("\nCodigo: %d\n", ficha[i].codigo);
				printf("\nTitulo: %s\n", ficha[i].titulo);
				printf("\nAutor: %s\n", ficha[i].autor);
				printf("\nArea: %s\n", ficha[i].area);
				printf("\nAno: %d\n", ficha[i].ano);
				printf("\nEditora: %s\n", ficha[i].editora);
			}
		}
		else{
			if(op==3){
				system("cls");
				printf("Digite o codigo que deseja buscar: ");
				scanf("%d", &busca);
				i=0;
				acha=0;
				while ((i<5) && (acha==0)){
					if (ficha[i].codigo == busca){
						acha = 1;
					} else{
						i++;
					}
					if(acha == 1){
						printf("\nCodigo: %d\n", ficha[i].codigo);
						printf("\nTitulo: %s\n", ficha[i].titulo);
						printf("\nAutor: %s\n", ficha[i].autor);
						printf("\nArea: %s\n", ficha[i].area);
						printf("\nAno: %d\n", ficha[i].ano);
						printf("\nEditora: %s\n", ficha[i].editora);
					} else{
						printf("\nRegistro nao encontrado");
					}
				}	
			}
			else{
				if (op==4){
					for(i=0;i<4;i++){
						for (j=i+1;j<5;j++){
							if (ficha[i].ano > ficha[j].ano){
								troca=ficha[i];
								ficha[i]= ficha[j];
								ficha[j]=ficha[i];
							}
						}
					}
					for (i=0;i<5;i++){
						printf("\n Codigo: %d, Titulo: %s, Ano: %d \n", ficha[i].codigo, ficha[i].titulo, ficha[i].ano);
					}
				}
			}
		}
	}
}
	
	
	
	
	return 0;
}

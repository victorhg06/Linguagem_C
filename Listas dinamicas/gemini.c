#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
  int valor; // Valor armazenado no elemento
  struct elemento *proximo; // Ponteiro para o próximo elemento da lista
} TipoElemento;

TipoElemento *primeiro = NULL; // Ponteiro para o primeiro elemento da lista

// Função para inserir um elemento na lista
void inserirElemento(int valor) {
  TipoElemento *novoElemento = (TipoElemento *) malloc(sizeof(TipoElemento));
  novoElemento->valor = valor;
  novoElemento->proximo = primeiro;
  primeiro = novoElemento;
};

// Função para remover um elemento da lista
void removerElemento(int valor) {
  TipoElemento *anterior = NULL;
  TipoElemento *atual = primeiro;

  while (atual != NULL && atual->valor != valor) {
    anterior = atual;
    atual = atual->proximo;
  }

  if (atual != NULL) {
    if (anterior == NULL) { // Remover o primeiro elemento
      primeiro = atual->proximo;
    } else {
      anterior->proximo = atual->proximo;
    }
    free(atual);
  } else {
    printf("Elemento não encontrado!\n");
  }
};

// Função para imprimir a lista
void imprimirLista() {
  TipoElemento *atual = primeiro;

  if (atual == NULL) {
    printf("Lista vazia!\n");
  } else {
    printf("Lista: ");
    while (atual != NULL) {
      printf("%d ", atual->valor);
      atual = atual->proximo;
    }
    printf("\n");
  }
};



int main(int argc, char *argv[]) {
	
  inserirElemento(10);
  inserirElemento(20);
  inserirElemento(30);

  imprimirLista();

  removerElemento(20);

  imprimirLista();
	
	return 0;
}

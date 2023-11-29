#include <stdio.h>
#include <stdlib.h>
# define TAM 10
/* Função que ordena vetor  */

int* ordenavet(int vet[TAM]) {
    int i, cont, troca;

    for (cont = 0; cont < TAM - 1; cont++) {
        for (i = 0; i < TAM - cont - 1; i++) {
            if (vet[i] > vet[i + 1]) {
                troca = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = troca;
            }
        }
    }

    return vet;
}

int main() {
    int num[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    int *ordena = ordenavet(num);  // declarei uma variável com a chamada da função O Asterisco é para declarar o ponteiro

    printf("A ordem crescente é a seguinte: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", ordena[i]);
    }

    return 0;
}

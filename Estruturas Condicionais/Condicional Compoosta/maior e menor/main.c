#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,n3,n4,n5,maior,menor;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	printf("Digite o quarto numero: ");
	scanf("%d", &n4);
	printf("Digite o quinto numero: ");
	scanf("%d", &n5);
	if (n1>n2 && n1>n3 && n1>n4 && n1>n5){
		maior=n1;
	}
	else{
		if(n2>n3 && n2>n4 && n2>n5){
			maior=n2;
		}
		else{
			if(n3>n4 && n3>n5){
				maior=n3;
			}
			else{
				if(n4>n5){
					maior=n4;
				}
				else{
					maior=n5;
				}
			}
		}
	}
	if (n1<n2 && n1<n3 && n1<n4 && n1<n5){
		menor=n1;
	}
	else {
		if (n2<n3 && n2<n4 && n2<n5){
			menor=n2;
		}
		else{
			if (n3<n4 && n3<n5){
				menor=n3;
			}
			else{
				if (n4<n5){
					menor=n4;
				}
				else{
					menor=n5;
				}
			}
		}
	}
	
	printf("\fO maior numero digitado foi: %d\n", maior);
	printf("O menor numero digitado foi: %d", menor);
	return 0;
}

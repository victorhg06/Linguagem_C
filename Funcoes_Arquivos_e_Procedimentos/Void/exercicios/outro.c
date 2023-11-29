#define Tamanho 20
 
struct func
{
            int matricula;
            char nome[50];
            char setor[30];
            float salario;
};
 
struct func ficha[Tamanho];
 
int main()
{
	
	printf("%s", ficha[20].matricula);
            return (0);
}

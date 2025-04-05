#include <stdio.h>
#include <locale.h>

struct Funcionario {
	char nome[50];
	char cargo[20];
	float salario;
};

int main() {
	setlocale(LC_ALL, "");
	
	#define MAX 3
	
	int i;
	struct Funcionario funcionario[MAX];
	
	printf("\n==== REGISTRO DE FUNCION�RIOS ====\n");
	
	for (i = 0; i < MAX; i++) {

		printf("\n\n\tFUNCION�RIO N�%d\n\n", i + 1);
		
		printf("\tDigite o nome do funcion�rio: ");
		scanf(" %[^\n]", funcionario[i].nome);  // tirado o &

		printf("\tDigite o cargo do funcion�rio: ");
		scanf(" %[^\n]", funcionario[i].cargo); // tirado o &

		printf("\tDigite o sal�rio do funcion�rio: R$ ");
		scanf("%f", &funcionario[i].salario);
	}
	
	printf("\n\t\t\t-----------\t\t\t\n");
	printf("\n==== FUNCION�RIOS CADASTRADOS ====\n");

	for (i = 0; i < MAX; i++) {
		printf("\n\n- N�%d\n", i + 1);
		printf("\tNome: %s\n", funcionario[i].nome);
		printf("\tCargo: %s\n", funcionario[i].cargo);
		printf("\tSal�rio: R$ %.2f\n", funcionario[i].salario);
	}
	
	return 0;
}


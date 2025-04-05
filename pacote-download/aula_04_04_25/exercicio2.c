#include <stdio.h>
#include <locale.h>


struct Aluno {
	char nome [50];
	int idade;
	float nota;
};



int main () {
	setlocale(LC_ALL, "");
	    
	#define MAX 3
	struct Aluno alunos[MAX];
	int i;
	
	for (i = 0; i < MAX; i++) {
		printf("\n--- Cadastro do %dº aluno ---\n", i + 1);
		
		printf("Nome: ");
		scanf(" %[^\n]", alunos[i].nome);
		
		printf("Idade: ");
		scanf("%d", &alunos[i].idade);
		
		printf("Nota: ");
		scanf("%f", &alunos[i].nota);
	}
	
	printf("\n===== Lista de Alunos =====");
	
	for (i = 0; i < MAX; i++) {
		printf("\nAluno %d\n", i + 1);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Idade: %d\n", alunos[i].idade);
		printf("Nota: %.2f\n", alunos[i].nota);
	}	
	
	return 0;
}

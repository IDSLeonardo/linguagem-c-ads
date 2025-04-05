#include <stdio.h>
#include <locale.h>

struct Livro {
	char titulo[40];
	char autor[40];
	int ano;
};

int main () {
	setlocale(LC_ALL,"");

	#define MAX 3
	
	struct Livro livro[MAX];
	int i;
		
	printf("=== BIBLIOTECA - FATEC ===\n\n");
	printf("--- CADASTRO DE LIVROS ---\n\n");
	
	for (i = 0; i < MAX; i++) {
		printf("Livro Nº %d\n", i+1);
		
		printf("Informe o nome do livro: ");
		scanf(" %[^\n]", livro[i].titulo);
		
		printf("Informe o autor do livro: ");
		scanf(" %[^\n]", livro[i].autor);
		
		printf("Informe o ano da publicação: ");
		scanf("%d", &livro[i].ano);
	}
	
	for (i = 0; i < MAX; i++) {
		printf("\n\n\n === LIVROS CADASTRADOS ===\n\n");
		printf("- Livro Nº %d", i+1);
		
		printf("\n\t- Nome: %s", livro[i].titulo);
		printf("\n\t- Autor: %s", livro[i].autor);
		printf("\n\t- Ano de publicação: %d", livro[i].ano);
	}
	
	return 0;
}

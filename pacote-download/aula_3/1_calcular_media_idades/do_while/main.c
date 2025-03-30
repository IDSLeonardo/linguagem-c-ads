#include <stdio.h>


int main() 
{
	
	int idade, soma=0, contador=0, media;
	
	do
	{
		printf("Insira a idade da pessoa %d: ", contador+1);
		scanf("%d", &idade);
		
		if (idade != -1)
		{
			soma += idade;
			contador = contador + 1;
		}
	}
	while (idade != -1);
	
	if (contador > 0)
	{
		media = (float) soma / contador;
		printf("\nA media das idades e: %.2f\n", media);
	}
	else
	{
		printf("Nenhuma idade foi inserida.\n");
	}
	
	
	return 0;
}
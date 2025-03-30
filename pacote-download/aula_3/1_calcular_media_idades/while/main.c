#include <stdio.h>


int main() 
{
	
	int idade, soma=0, contador=0;
	float media;

	printf("\n------------ CALCULO DE IDADE MEDIA DE PESSOAS - WHILE ------------\n\n");
	
	while (idade != 1)
	{
		printf("\nDigite a idade da pessoa %d: ", contador+1);
		scanf("%d", &idade);
		
		if (idade == -1) 
		{
			break;
		}
		
		soma += idade;
		contador++;
		
	}
	
	if (contador > 0)
	{
		media = soma/contador;
		printf("\n\nIdade media: %.2f\n", media);
	}
	else
	{
		printf("\nNenhuma idade foi inserida\n");
		printf("\nPrograma encerrado!");
	}
	
	return 0;
}
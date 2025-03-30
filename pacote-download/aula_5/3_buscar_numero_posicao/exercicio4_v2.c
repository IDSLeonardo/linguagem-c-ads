#include <stdio.h>

int main()

{
	int numeros [5], i = 0, numero;
	
	for (i = 0; i < 5; i++)
	{
		printf("Digite um numero inteiro para o vetor [%d]: ", i);
		scanf("%d", &numeros[i]);
	}
	
	printf("\nDigite um numero para buscar no vetor: ");
    scanf("%d", &numero);
 
    for (i = 0; i < 5; i++) 
	{
        if (numeros[i] == numero) 
		{
            printf("Numero encontrado na posicao %d\n", i);
            break;
        }
    }
    
    if (i==5)
    {
    	printf("Numero nao encontrado no vetor!");
	}
	
	return 0;
}

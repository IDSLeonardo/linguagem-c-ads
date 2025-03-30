#include <stdio.h>
#include <locale.h>
 
int main() 
{
	
	setlocale(LC_ALL, "");
	
    char cadastrar, alimentado, resfriado;
    char nome[100];
    int idade;
    float peso;
 
    printf("Deseja cadastrar um doador? (s/n): ");
    scanf(" %c", &cadastrar);
 
    while (cadastrar == 's') 
	{
        printf("\n--- Cadastro de Doador ---\n");
 
        printf("O doador esta bem alimentado? (s/n): ");
        scanf(" %c", &alimentado);
 
        if (alimentado == 's') 
		{
            printf("O doador esta resfriado? (s/n): ");
            scanf(" %c", &resfriado);
 
            if (resfriado == 'n') 
			{
                printf("Insira o nome completo do doador: ");
                scanf(" %s", nome);
 
                printf("Insira a idade do doador: ");
                scanf("%d", &idade);
 
                printf("Insira o peso do doador (kg): ");
                scanf("%f", &peso);
 
                printf("\n--- Resultado ---\n");
 
                if (idade < 16 || idade > 69) printf("Idade fora dos requisitos (16 a 69 anos).\n");
                if (peso < 50) printf("Peso abaixo do minimo necessario (50 kg).\n");
                if (idade >= 16 && idade <= 69 && peso >= 50) 
				{
                    printf("%s esta apto(a) para doar sangue!\n", nome);
                } else 
				{
                    printf("%s nao atende aos requisitos para doacao.\n", nome);
                }
            } else 
			{
                printf("\nO doador nao pode estar resfriado!\n");
            }
        } else 
		{
            printf("\nO voluntário precisa estar alimentado!\n");
        }
 
        printf("\nDeseja cadastrar outro doador? (s/n): ");
        scanf(" %c", &cadastrar);
    }
 
    printf("\nPrograma encerrado.\n");
 
    return 0;
}
 
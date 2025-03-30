#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");  // Configura para suportar acentua��o
    
    char iniciar_prog;
    
    printf("Deseja calcular o IMC? (s/n): ");
    scanf(" %c", &iniciar_prog);
    
    while (iniciar_prog == 's' || iniciar_prog == 'S')
    {
        float altura, peso, imc;
        
        printf("\n-------------------------------------------------------------\n");
        printf("    Sistema de C�lculo de IMC\n");
        printf("-------------------------------------------------------------\n\n");
        
        printf("Digite sua altura (em metros, ex: 1,75): ");
        scanf("%f", &altura);
        
        printf("Agora, digite seu peso (em kg, ex: 70): ");
        scanf("%f", &peso);
        
        imc = peso / pow(altura, 2);
        
        printf("\n-------------------------------------------------------------\n");
        printf("Seu IMC �: %.2f\n", imc);
        
        if (imc <= 30)
            printf("Voc� n�o est� obeso(a)!\n");
        else
            printf("Voc� est� obeso(a)!\n");
        
        printf("-------------------------------------------------------------\n");
        printf("\nDeseja calcular novamente? (s/n): ");
        scanf(" %c", &iniciar_prog);
    }
    
    printf("\n-------------------------------------------------------------\n");
    printf("Programa encerrado! Obrigado por utilizar nosso sistema.\n");
    printf("-------------------------------------------------------------\n\n");
    
    return 0;
}

